﻿#pragma strict

import System.IO;

var start_menu_ : GameObject;
var list : listbox;
var list_element : GameObject;

private var game_filenames : String[];
private var game_names : String[];
private var list_elements : GameObject[];


private static function file_info_cmp (a : FileInfo, b : FileInfo) : int
{
    if (a.LastWriteTime < b.LastWriteTime)
        return 1;
    if (b.LastWriteTime < a.LastWriteTime)
        return -1;
    return 0;
}

function find_saves ()
{
    var info = new DirectoryInfo(Application.persistentDataPath);
    var files : FileInfo[] = info.GetFiles();

    System.Array.Sort(files, file_info_cmp);

    game_filenames = new String[files.Length + 3];
    game_names = new String[files.Length + 3];

    game_filenames[game_names.Length - 3] = 'foo.save';
    game_filenames[game_names.Length - 2] = 'bar.save';
    game_filenames[game_names.Length - 1] = 'baz.save';

    game_names[game_names.Length - 3] = 'foo';
    game_names[game_names.Length - 2] = 'bar';
    game_names[game_names.Length - 1] = 'baz';

    for (var i = 0; i < files.Length; ++i) {
        var prefix = 36; // length of guid
        game_filenames[i] = files[i].Name;
        game_names[i] =
            game_filenames[i].Substring(prefix, game_filenames[i].Length - prefix) +
            '\n' + files[i].LastWriteTime.ToString();
    }
}

function OnEnable ()
{
    find_saves();

    list_elements = new GameObject[game_filenames.Length];

    for (var i = 0; i < game_filenames.Length; ++i) {
        var instance : GameObject = Instantiate(list_element);
        list_elements[i] = instance;

        var text : UI.Text = instance.GetComponentInChildren(UI.Text);
        text.text = game_names[i];

        var selectable_item_ : selectable_item =
            instance.GetComponent(selectable_item);
        selectable_item_.value = game_filenames[i];
        selectable_item_.toggle_group_ = GetComponent(toggle_group);

        var toggle : UI.Toggle = instance.GetComponentInChildren(UI.Toggle);
        toggle.group = GetComponent(UI.ToggleGroup);
    }

    list.set_data(list_elements, 30);
}

function load ()
{
    // TODO JSONLevelSerializer.LoadSavedLevelFromFile(game_filenames[selection]);
    // TODO gameObject.SetActive(false);
}

function cancel ()
{
    gameObject.SetActive(false);
    start_menu_.SetActive(true);
}
