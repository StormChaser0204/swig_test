﻿// -*- javascript -*-
Shader "Custom/solid_color_feature"
{
    Properties {
        _secondary_colors ("Secondary Colors", 2D) = "white" {}
    }

    SubShader { Pass { CGPROGRAM

        #pragma vertex vert
        #pragma fragment frag
        #include "UnityCG.cginc"

        sampler2D _secondary_colors;

        struct v2f
        {
            float4 position : SV_POSITION;
            float owner : TEXCOORD5;
        };

        v2f vert (appdata_full v)
        {
            v2f o;

            float4 vertex = float4(v.vertex.xy, 0, 1);
            o.position = mul(UNITY_MATRIX_MVP, vertex);

            // Pass through encoded owner ID, scaled for sampling.
            o.owner = v.texcoord1.x * 4.0;

            return o;
        }

        float4 frag (v2f i) : COLOR
        {
            float4 secondary_color = tex2D(_secondary_colors, float2(i.owner, 0.5));
            return secondary_color;
        }

    ENDCG } }

    FallBack "Diffuse"
}