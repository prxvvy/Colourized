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

#ifndef COLOURIT_NODE_HPP
#define COLOURIT_NODE_HPP

#include <napi.h>

extern "C" {
#include "color_codes.h"
}

Napi::Value ColourIt(const Napi::CallbackInfo &info, Colours colour);

#endif  // COLOURIT_NODE_HPP
