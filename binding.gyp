{
    "targets": [
        {
            "target_name": "colorized_lib",
            "sources": [
                "./source/main.cpp",
                "./source/utils.c",
                "./source/colours.c",
                "./source/include/utils.h",
                "./source/include/colours.h",
                "./source/include/colours_node.hpp",
                "./source/include/color_codes.h",
                "./source/include/colourit_node.hpp",
                "./source/colours_node.cpp",
                "./source/colourit_node.cpp",
            ],
            "cflags!": ["-fno-exceptions"],
            "cflags_cc!": ["-fno-exceptions"],
            "include_dirs": ["<!@(node -p \"require('node-addon-api').include\")"],
            "defines": ["NAPI_DISABLE_CPP_EXCEPTIONS"],
        }
    ]
}
