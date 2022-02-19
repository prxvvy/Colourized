/* Colourized - A program to add colour to Node.js console output.
 * Copyright (C) 2022 prxvvy <qsk55464@gmail.com>
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

#include <napi.h>

#include "include/colours_node.hpp"

/**
 * cmake -DCMAKE_BUILD_TYPE=Debug -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -G Ninja -B
 * cmake-build-debug
 */

using namespace Napi;

Object Init(Env env, Object exports) {
   exports.Set(String::New(env, "cyan"), Function::New(env, CyanIt));
   exports.Set(String::New(env, "red"), Function::New(env, RedIt));
   exports.Set(String::New(env, "yellow"), Function::New(env, YellowIt));
   exports.Set(String::New(env, "green"), Function::New(env, GreenIt));
   exports.Set(String::New(env, "blue"), Function::New(env, BlueIt));
   exports.Set(String::New(env, "black"), Function::New(env, BlackIt));
   exports.Set(String::New(env, "magenta"), Function::New(env, MagentaIt));
   exports.Set(String::New(env, "grey"), Function::New(env, GreyIt));
   exports.Set(String::New(env, "white"), Function::New(env, WhiteIt));

   exports.Set(String::New(env, "lightRed"), Function::New(env, LightRedIt));
   exports.Set(String::New(env, "lightYellow"),
               Function::New(env, LightYellowIt));
   exports.Set(String::New(env, "lightGreen"),
               Function::New(env, LightGreenIt));
   exports.Set(String::New(env, "lightBlue"), Function::New(env, LightBlueIt));
   exports.Set(String::New(env, "lightGrey"), Function::New(env, LightGreyIt));
   exports.Set(String::New(env, "lightCyan"), Function::New(env, LightCyanIt));
   exports.Set(String::New(env, "lightMagenta"),
               Function::New(env, LightMagentaIt));
   exports.Set(String::New(env, "lightWhite"),
               Function::New(env, LightWhiteIt));

   exports.Set(String::New(env, "bgRed"), Function::New(env, BgRedIt));
   exports.Set(String::New(env, "bgBlack"), Function::New(env, BgBlackIt));
   exports.Set(String::New(env, "bgGreen"), Function::New(env, BgGreenIt));
   exports.Set(String::New(env, "bgYellow"), Function::New(env, BgYellowIt));
   exports.Set(String::New(env, "bgBlue"), Function::New(env, BgBlueIt));
   exports.Set(String::New(env, "bgMagenta"), Function::New(env, BgMagentaIt));
   exports.Set(String::New(env, "bgCyan"), Function::New(env, BgCyanIt));
   exports.Set(String::New(env, "bgWhite"), Function::New(env, BgWhiteIt));
   exports.Set(String::New(env, "bgGrey"), Function::New(env, BgGreyIt));

   exports.Set(String::New(env, "bgLightRed"),
               Function::New(env, BgLightRedIt));
   exports.Set(String::New(env, "bgLightGreen"),
               Function::New(env, BgLightGreenIt));
   exports.Set(String::New(env, "bgLightYellow"),
               Function::New(env, BgLightYellowIt));
   exports.Set(String::New(env, "bgLightBlue"),
               Function::New(env, BgLightBlueIt));
   exports.Set(String::New(env, "bgLightMagenta"),
               Function::New(env, BgLightMagentaIt));
   exports.Set(String::New(env, "bgLightCyan"),
               Function::New(env, BgLightCyanIt));
   exports.Set(String::New(env, "bgLightWhite"),
               Function::New(env, BgLightWhiteIt));
   exports.Set(String::New(env, "bgLightGrey"),
               Function::New(env, BgLightGreyIt));

   exports.Set(String::New(env, "underline"), Function::New(env, UnderlineIt));
   exports.Set(String::New(env, "bold"), Function::New(env, BoldIt));
   exports.Set(String::New(env, "dim"), Function::New(env, DimIt));
   exports.Set(String::New(env, "italic"), Function::New(env, ItalicIt));
   exports.Set(String::New(env, "inverse"), Function::New(env, InverseIt));

   return exports;
}

NODE_API_MODULE(NODE_GYP_MODULE_NAME, Init);
