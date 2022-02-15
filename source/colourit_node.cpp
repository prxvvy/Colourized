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
// Created by prxvvy on 15-02-22.
//

#include "include/colourit_node.hpp"

extern "C" {
#include <stdlib.h>

#include "include/colours.h"
}

using namespace Napi;
using namespace std;

Value ColourIt(const CallbackInfo &info, Colours colour) {
   Env env = info.Env();

   if (info.Length() == 0) throw Error::New(env, "1 argument expected.");

   if (!info[0].IsString())
      throw TypeError::New(env, "Was expecting a string.");

   string input = info[0].As<String>();

   char *p_input = const_cast<char *>(input.c_str());

   char *p_colouredString = NULL;

   switch (colour) {
      case RED_:
         p_colouredString = Red(p_input);
         break;
      case GREEN_:
         p_colouredString = Green(p_input);
         break;
      case BLUE_:
         p_colouredString = Blue(p_input);
         break;
      case YELLOW_:
         p_colouredString = Yellow(p_input);
         break;
      case BLACK_:
         p_colouredString = Black(p_input);
         break;
      case MAGENTA_:
         p_colouredString = Magenta(p_input);
         break;
      case GREY_:
         p_colouredString = Grey(p_input);
         break;
      case WHITE_:
         p_colouredString = White(p_input);
         break;
      case CYAN_:
         p_colouredString = Cyan(p_input);
         break;
      case LIGHTRED_:
         p_colouredString = LightRed(p_input);
         break;
      case LIGHTYELLOW_:
         p_colouredString = LightYellow(p_input);
         break;
      case LIGHTGREEN_:
         p_colouredString = LightGreen(p_input);
         break;
      case LIGHTBLUE_:
         p_colouredString = LightBlue(p_input);
         break;
      case LIGHTGREY_:
         p_colouredString = LightGrey(p_input);
         break;
      case LIGHTCYAN_:
         p_colouredString = LightCyan(p_input);
         break;
      case LIGHTMAGENTA_:
         p_colouredString = LightMagenta(p_input);
         break;
      case LIGHTWHITE_:
         p_colouredString = LightWhite(p_input);
         break;
      case BGRED_:
         p_colouredString = BgRed(p_input);
         break;
      case BGBLACK_:
         p_colouredString = BgBlack(p_input);
         break;
      case BGGREEN_:
         p_colouredString = BgGreen(p_input);
         break;
      case BGYELLOW_:
         p_colouredString = BgYellow(p_input);
         break;
      case BGBLUE_:
         p_colouredString = BgBlue(p_input);
         break;
      case BGMAGENTA_:
         p_colouredString = BgMagenta(p_input);
         break;
      case BGCYAN_:
         p_colouredString = BgCyan(p_input);
         break;
      case BGWHITE_:
         p_colouredString = BgWhite(p_input);
         break;
      case BGGREY_:
         p_colouredString = BgGrey(p_input);
         break;
      case BGLIGHTRED_:
         p_colouredString = BgLightRed(p_input);
         break;
      case BGLIGHTGREEN_:
         p_colouredString = BgLightGreen(p_input);
         break;
      case BGLIGHTYELLOW_:
         p_colouredString = BgLightYellow(p_input);
         break;
      case BGLIGHTBLUE_:
         p_colouredString = BgLightBlue(p_input);
         break;
      case BGLIGHTMAGENTA_:
         p_colouredString = BgLightMagenta(p_input);
         break;
      case BGLIGHTCYAN_:
         p_colouredString = BgLightCyan(p_input);
         break;
      case BGLIGHTWHITE_:
         p_colouredString = BgLightWhite(p_input);
         break;
      case BGLIGHTGREY_:
         p_colouredString = BgLightGrey(p_input);
         break;
      case UNDERLINE_:
         p_colouredString = Underline(p_input);
         break;
      case BOLD_:
         p_colouredString = Bold(p_input);
         break;
      case DIM_:
         p_colouredString = Dim(p_input);
         break;
      case ITALIC_:
         p_colouredString = Italic(p_input);
         break;
      case INVERSE_:
         p_colouredString = Inverse(p_input);
         break;

      default:
         p_colouredString = NULL;
         break;
   }

   String colouredString = String::New(env, p_colouredString);

   free(p_colouredString);

   return colouredString;
}
