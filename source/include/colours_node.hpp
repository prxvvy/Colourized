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

//
// Created by prxvvy on 15/02/2022
//

#ifndef COLOURS_NODE_HPP
#define COLOURS_NODE_HPP

#include <napi.h>

Napi::Value RedIt(const Napi::CallbackInfo &info);

Napi::Value YellowIt(const Napi::CallbackInfo &info);

Napi::Value GreenIt(const Napi::CallbackInfo &info);

Napi::Value BlueIt(const Napi::CallbackInfo &info);

Napi::Value BlackIt(const Napi::CallbackInfo &info);

Napi::Value MagentaIt(const Napi::CallbackInfo &info);

Napi::Value GreyIt(const Napi::CallbackInfo &info);

Napi::Value WhiteIt(const Napi::CallbackInfo &info);

Napi::Value CyanIt(const Napi::CallbackInfo &info);

Napi::Value LightRedIt(const Napi::CallbackInfo &info);

Napi::Value LightYellowIt(const Napi::CallbackInfo &info);

Napi::Value LightGreenIt(const Napi::CallbackInfo &info);

Napi::Value LightBlueIt(const Napi::CallbackInfo &info);

Napi::Value LightGreyIt(const Napi::CallbackInfo &info);

Napi::Value LightCyanIt(const Napi::CallbackInfo &info);

Napi::Value LightMagentaIt(const Napi::CallbackInfo &info);

Napi::Value LightWhiteIt(const Napi::CallbackInfo &info);

Napi::Value BgRedIt(const Napi::CallbackInfo &info);

Napi::Value BgBlackIt(const Napi::CallbackInfo &info);

Napi::Value BgGreenIt(const Napi::CallbackInfo &info);

Napi::Value BgYellowIt(const Napi::CallbackInfo &info);

Napi::Value BgBlueIt(const Napi::CallbackInfo &info);

Napi::Value BgMagentaIt(const Napi::CallbackInfo &info);

Napi::Value BgCyanIt(const Napi::CallbackInfo &info);

Napi::Value BgWhiteIt(const Napi::CallbackInfo &info);

Napi::Value BgGreyIt(const Napi::CallbackInfo &info);

Napi::Value BgLightRedIt(const Napi::CallbackInfo &info);

Napi::Value BgLightGreenIt(const Napi::CallbackInfo &info);

Napi::Value BgLightYellowIt(const Napi::CallbackInfo &info);

Napi::Value BgLightBlueIt(const Napi::CallbackInfo &info);

Napi::Value BgLightMagentaIt(const Napi::CallbackInfo &info);

Napi::Value BgLightCyanIt(const Napi::CallbackInfo &info);

Napi::Value BgLightWhiteIt(const Napi::CallbackInfo &info);

Napi::Value BgLightGreyIt(const Napi::CallbackInfo &info);

Napi::Value UnderlineIt(const Napi::CallbackInfo &info);

Napi::Value BoldIt(const Napi::CallbackInfo &info);

Napi::Value DimIt(const Napi::CallbackInfo &info);

Napi::Value ItalicIt(const Napi::CallbackInfo &info);

Napi::Value InverseIt(const Napi::CallbackInfo &info);

#endif  // COLOURS_NODE_HPP
