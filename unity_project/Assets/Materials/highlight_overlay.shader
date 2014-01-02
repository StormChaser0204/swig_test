﻿// -*- javascript -*-
Shader "Custom/highlight_overlay"
{
    Properties {
        _Color ("Color", Color) = (1, 1, 1, 1)
        _alpha ("Alpha", float) = 0.5
    }

    SubShader { Pass {

        ZTest Always
        Blend SrcAlpha OneMinusSrcAlpha

        CGPROGRAM

        #pragma vertex vert
        #pragma fragment frag
        #include "UnityCG.cginc"

        float4 _Color;
        float _alpha;

        struct v2f
        {
            float4 position : SV_POSITION;
        };

        v2f vert (appdata_full v)
        {
            v2f o;
            float4 vertex = float4(v.vertex.xy, 0, 1);
            o.position = mul(UNITY_MATRIX_MVP, vertex);
            return o;
        }

        float4 frag (v2f i) : COLOR
        {
            return float4(_Color.rgb, _alpha);
        }

        ENDCG

    } }
}
