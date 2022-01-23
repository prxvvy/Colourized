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
#include "include/colour_node.h"

napi_value Init(napi_env env, napi_value exports) {
    napi_status status;
    napi_value func;
    
    CreateNodeFunction(status, func, CyanIt, env, "cyan", exports);
    CreateNodeFunction(status, func, RedIt, env, "red", exports);
    CreateNodeFunction(status, func, YellowIt, env, "yellow", exports);
    CreateNodeFunction(status, func, GreenIt, env, "green", exports);
    CreateNodeFunction(status, func, BlueIt, env, "blue", exports);
    CreateNodeFunction(status, func, BlackIt, env, "black", exports);
    CreateNodeFunction(status, func, MagentaIt, env, "magenta", exports);
    CreateNodeFunction(status, func, GreyIt, env, "grey", exports);
    CreateNodeFunction(status, func, WhiteIt, env, "white", exports);
    CreateNodeFunction(status, func, LightRedIt, env, "lightRed", exports);
    CreateNodeFunction(status, func, LightYellowIt, env, "lightYellow", exports);
    CreateNodeFunction(status, func, LightGreenIt, env, "lightGreen", exports);
    CreateNodeFunction(status, func, LightBlueIt, env, "lightBlue", exports);
    CreateNodeFunction(status, func, LightGreyIt, env, "lightGrey", exports);
    CreateNodeFunction(status, func, LightCyanIt, env, "lightCyan", exports);
    CreateNodeFunction(status, func, LightMagentaIt, env, "lightMagenta", exports);
    CreateNodeFunction(status, func, LightWhiteIt, env, "lightWhite", exports);
    CreateNodeFunction(status, func, BgRedIt, env, "bgRed", exports);
        
    return exports;
}

NAPI_MODULE(NODE_GYP_MODULE_NAME, Init)
