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

/**
 * @author      : prxvvy (qsk55464@gmail.com)
 * @created     : 13/01/2022
 * @filename    : colour_node
 */
#ifndef COLOUR_NODE_H
#define COLOUR_NODE_H

#include <node_api.h>
#include "color_codes.h"

void CreateNodeFunction(napi_status status, napi_value func, napi_callback cb, napi_env env, const char *utf8name, napi_value exports);

napi_value ColourIt(napi_env env, napi_callback_info info, Colours colour);

napi_value RedIt(napi_env env, napi_callback_info info);

napi_value YellowIt(napi_env env, napi_callback_info info);

napi_value GreenIt(napi_env env, napi_callback_info info);

napi_value BlueIt(napi_env env, napi_callback_info info);

napi_value BlackIt(napi_env env, napi_callback_info info);

napi_value MagentaIt(napi_env env, napi_callback_info info);

napi_value GreyIt(napi_env env, napi_callback_info info);

napi_value WhiteIt(napi_env env, napi_callback_info info);

napi_value CyanIt(napi_env env, napi_callback_info info);

napi_value LightRedIt(napi_env env, napi_callback_info info);

napi_value LightYellowIt(napi_env env, napi_callback_info info);

napi_value LightGreenIt(napi_env env, napi_callback_info info);

napi_value LightBlueIt(napi_env env, napi_callback_info info);

napi_value LightGreyIt(napi_env env, napi_callback_info info);

napi_value LightCyanIt(napi_env env, napi_callback_info info);

napi_value LightMagentaIt(napi_env env, napi_callback_info info);

napi_value LightWhiteIt(napi_env env, napi_callback_info info);

napi_value BgRedIt(napi_env env, napi_callback_info info);

napi_value BgBlackIt(napi_env env, napi_callback_info info);

napi_value BgGreenIt(napi_env env, napi_callback_info info);

napi_value BgYellowIt(napi_env env, napi_callback_info info);

napi_value BgBlueIt(napi_env env, napi_callback_info info);

napi_value BgMagentaIt(napi_env env, napi_callback_info info);

napi_value BgCyanIt(napi_env env, napi_callback_info info);

napi_value BgWhiteIt(napi_env env, napi_callback_info info);

napi_value BgGreyIt(napi_env env, napi_callback_info info);

napi_value UnderlineIt(napi_env env, napi_callback_info info);

#endif /* COLOUR_NODE_H */

