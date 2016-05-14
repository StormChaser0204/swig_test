#!/usr/bin/env python

import argparse

files = [
    'nations',
    'map',
    'oob',
    'units',
    'scenario',
    'hex_map_config'
]

parser = argparse.ArgumentParser(description='Generate a header containing the default data files as strings.')

for f in files:
    parser.add_argument('--{}-file'.format(f.replace('_', '-')), required=True, type=argparse.FileType('r'))

parser.add_argument('--out-file', required=True, type=argparse.FileType('w'))

args = parser.parse_args()

def strip_newline(s):
    if 0 < len(s):
        if s[-1] == '\n':
            s = s[:-1]
    if 0 < len(s):
        if s[-1] == '\r':
            s = s[:-1]
    return s

def quote(s):
    return s.replace('"', r'\"').replace(r'\n', r'\\n')

def prepare(lines):
    retval = ''
    for line in lines:
        retval += '"' + quote(strip_newline(line)) + r'\n' + '"\n'
    return retval

def process(f):
    name = f + '_json_string'
    f = getattr(args, f + '_file')
    s = prepare(f.readlines())
    args.out_file.write('''const char* {name} = {s};

'''.format(**locals()))

args.out_file.write('''#pragma once

''')

for f in files:
    process(f)
