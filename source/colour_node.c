/* Colourized - A program to add colour to Node.js console output. 
 * Copyright (C) 2021 prxvvy <qsk55464@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include <node_api.h>
#include <stdlib.h>
#include <string.h>
#include "include/colour_node.h"
#include "include/colours.h"
#include "include/color_codes.h"

void CreateNodeFunction(napi_status status, napi_value func, napi_callback cb, napi_env env, const char *utf8name, napi_value exports) {
    status = napi_create_function(env, NULL, 0, cb, NULL, &func);
    if (status != napi_ok) {
        napi_throw_error(env, NULL, "Unable to wrap native function.");
    }
    status = napi_set_named_property(env, exports, utf8name, func);
     if (status != napi_ok) {
        napi_throw_error(env, NULL, "Unable to populate exports.");
    }
}

napi_value ColourIt(napi_env env, napi_callback_info info, Colours colour) {
    napi_status status;
    size_t argc = 1;
    napi_value argv[1];

    napi_get_cb_info(env, info, &argc, argv, NULL, NULL);

    if (argc < 1) {
        napi_throw_error(env, NULL, "1 argument expected.");
        return NULL;
    }

    size_t strSize, strSizeRead;

    status = napi_get_value_string_utf8(env, argv[0], NULL, 0, &strSize);
    if (status != napi_ok) {
        napi_throw_error(env, NULL, "String expected.");
        return NULL;
    }

    char *p_buf = calloc(strSize + 1, sizeof(char));
    strSize = strSize + 1;

    status = napi_get_value_string_utf8(env, argv[0], p_buf, strSize, &strSizeRead);
    if (status != napi_ok) {
        napi_throw_error(env, NULL, "String expected.");
        return NULL;
    } 

    char *p_colouredString;

    switch (colour) {
        case RED_:
            p_colouredString = Red(p_buf);
            break;
        case GREEN_:
            p_colouredString = Green(p_buf);
            break;
        case BLUE_:
            p_colouredString = Blue(p_buf);
            break;
        case YELLOW_:
            p_colouredString = Yellow(p_buf);
            break;
        case BLACK_:
            p_colouredString = Black(p_buf);
            break;
        case MAGENTA_:
            p_colouredString = Magenta(p_buf);
            break;
        case GREY_:
            p_colouredString = Grey(p_buf);
            break;
        case WHITE_:
            p_colouredString = White(p_buf);
            break;
        case CYAN_:
            p_colouredString = Cyan(p_buf);
            break;
        case LIGHTRED_:
            p_colouredString = LightRed(p_buf);
            break;
        case LIGHTYELLOW_:
            p_colouredString = LightYellow(p_buf);
            break;
        case LIGHTGREEN_:
            p_colouredString = LightGreen(p_buf);
            break;
        case LIGHTBLUE_:
            p_colouredString = LightBlue(p_buf);
            break;
        case LIGHTGREY_:
            p_colouredString = LightGrey(p_buf);
            break;
        case LIGHTCYAN_:
            p_colouredString = LightCyan(p_buf);
            break;
        case LIGHTMAGENTA_:
            p_colouredString = LightMagenta(p_buf);
            break;
        case LIGHTWHITE_:
            p_colouredString = LightWhite(p_buf);
            break;
        case BGRED_:
            p_colouredString = BgRed(p_buf);
            break;
        default:
            p_colouredString = NULL;
            break;
    }

    napi_value res;

    status = napi_create_string_utf8(env, p_colouredString, strlen(p_colouredString) + 1, &res);
    if (status != napi_ok) {
        napi_throw_error(env, NULL, "Unabled to create return value.");
        return NULL;
    }

    free(p_buf);
    free(p_colouredString);
    return res;

}

napi_value RedIt(napi_env env, napi_callback_info info) {
    return ColourIt(env, info, RED_);
}

napi_value YellowIt(napi_env env, napi_callback_info info) {
    return ColourIt(env, info, YELLOW_);
}

napi_value GreenIt(napi_env env, napi_callback_info info) {
    return ColourIt(env, info, GREEN_);
}

napi_value CyanIt(napi_env env, napi_callback_info info) {
    return ColourIt(env, info, CYAN_);
}

napi_value BlueIt(napi_env env, napi_callback_info info) {
    return ColourIt(env, info, BLUE_);
}

napi_value BlackIt(napi_env env, napi_callback_info info) {
    return ColourIt(env, info, BLACK_);
}

napi_value MagentaIt(napi_env  env, napi_callback_info info) {
    return ColourIt(env, info, MAGENTA_);
}

napi_value GreyIt(napi_env  env, napi_callback_info info) {
    return ColourIt(env, info, GREY_);
}

napi_value WhiteIt(napi_env  env, napi_callback_info info) {
    return ColourIt(env, info, WHITE_);
}

napi_value BgRedIt(napi_env  env, napi_callback_info info) {
    return ColourIt(env, info, BGRED_);
}

napi_value LightRedIt(napi_env env, napi_callback_info info) {
    return ColourIt(env, info, LIGHTRED_);
}

napi_value LightYellowIt(napi_env env, napi_callback_info info) {
    return ColourIt(env, info, LIGHTYELLOW_);
}

napi_value LightGreenIt(napi_env env, napi_callback_info info) {
    return ColourIt(env, info, LIGHTGREEN_);
}

napi_value LightBlueIt(napi_env env, napi_callback_info info) {
    return ColourIt(env, info, LIGHTBLUE_);
}

napi_value LightGreyIt(napi_env env, napi_callback_info info) {
    return ColourIt(env, info, LIGHTGREY_);
}

napi_value LightCyanIt(napi_env env, napi_callback_info info) {
    return ColourIt(env, info, LIGHTCYAN_);
}

napi_value LightMagentaIt(napi_env env, napi_callback_info info) {
    return ColourIt(env, info, LIGHTMAGENTA_);
}

napi_value LightWhiteIt(napi_env env, napi_callback_info info) {
    return ColourIt(env, info, LIGHTWHITE_);
}
