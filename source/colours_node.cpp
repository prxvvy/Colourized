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

#include "include/colours_node.hpp"

#include "include/colourit_node.hpp"
#include "napi.h"

extern "C" {
#include "include/color_codes.h"
}

using namespace Napi;

Value RedIt(const CallbackInfo &info) { return ColourIt(info, RED_); }

Value YellowIt(const CallbackInfo &info) { return ColourIt(info, YELLOW_); }

Value GreenIt(const CallbackInfo &info) { return ColourIt(info, GREEN_); }

Value CyanIt(const CallbackInfo &info) { return ColourIt(info, CYAN_); }

Value BlueIt(const CallbackInfo &info) { return ColourIt(info, BLUE_); }

Value BlackIt(const CallbackInfo &info) { return ColourIt(info, BLACK_); }

Value MagentaIt(const CallbackInfo &info) { return ColourIt(info, MAGENTA_); }

Value GreyIt(const CallbackInfo &info) { return ColourIt(info, GREY_); }

Value WhiteIt(const CallbackInfo &info) { return ColourIt(info, WHITE_); }

Value LightRedIt(const CallbackInfo &info) { return ColourIt(info, LIGHTRED_); }

Value LightYellowIt(const CallbackInfo &info) {
   return ColourIt(info, LIGHTYELLOW_);
}

Value LightGreenIt(const CallbackInfo &info) {
   return ColourIt(info, LIGHTGREEN_);
}

Value LightBlueIt(const CallbackInfo &info) {
   return ColourIt(info, LIGHTBLUE_);
}

Value LightGreyIt(const CallbackInfo &info) {
   return ColourIt(info, LIGHTGREY_);
}

Value LightCyanIt(const CallbackInfo &info) {
   return ColourIt(info, LIGHTCYAN_);
}

Value LightMagentaIt(const CallbackInfo &info) {
   return ColourIt(info, LIGHTMAGENTA_);
}

Value LightWhiteIt(const CallbackInfo &info) {
   return ColourIt(info, LIGHTWHITE_);
}

Value BgRedIt(const CallbackInfo &info) { return ColourIt(info, BGRED_); }

Value BgBlackIt(const CallbackInfo &info) { return ColourIt(info, BGBLACK_); }

Value BgGreenIt(const CallbackInfo &info) { return ColourIt(info, BGGREEN_); }

Value BgYellowIt(const CallbackInfo &info) { return ColourIt(info, BGYELLOW_); }

Value BgBlueIt(const CallbackInfo &info) { return ColourIt(info, BGBLUE_); }

Value BgMagentaIt(const CallbackInfo &info) {
   return ColourIt(info, BGMAGENTA_);
}

Value BgCyanIt(const CallbackInfo &info) { return ColourIt(info, BGCYAN_); }

Value BgWhiteIt(const CallbackInfo &info) { return ColourIt(info, BGWHITE_); }

Value BgGreyIt(const CallbackInfo &info) { return ColourIt(info, BGGREY_); }

Value BgLightRedIt(const CallbackInfo &info) {
   return ColourIt(info, BGLIGHTRED_);
}

Value BgLightGreenIt(const CallbackInfo &info) {
   return ColourIt(info, BGLIGHTGREEN_);
}

Value BgLightYellowIt(const CallbackInfo &info) {
   return ColourIt(info, BGLIGHTYELLOW_);
}

Value BgLightBlueIt(const CallbackInfo &info) {
   return ColourIt(info, BGLIGHTBLUE_);
}

Value BgLightMagentaIt(const CallbackInfo &info) {
   return ColourIt(info, BGLIGHTMAGENTA_);
}

Value BgLightCyanIt(const CallbackInfo &info) {
   return ColourIt(info, BGLIGHTCYAN_);
}

Value BgLightWhiteIt(const CallbackInfo &info) {
   return ColourIt(info, BGLIGHTWHITE_);
}

Value BgLightGreyIt(const CallbackInfo &info) {
   return ColourIt(info, BGLIGHTGREY_);
}

Value UnderlineIt(const CallbackInfo &info) {
   return ColourIt(info, UNDERLINE_);
}

Value BoldIt(const CallbackInfo &info) { return ColourIt(info, BOLD_); }

Value DimIt(const CallbackInfo &info) { return ColourIt(info, DIM_); }

Value ItalicIt(const CallbackInfo &info) { return ColourIt(info, ITALIC_); }

Value InverseIt(const CallbackInfo &info) { return ColourIt(info, INVERSE_); }
