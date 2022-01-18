"use strict";
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
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
var bindings_1 = __importDefault(require("bindings"));
var addon = (0, bindings_1["default"])('colorized_lib');
function red(text) {
    if (!text)
        throw new Error('1 argument expected.');
    return addon.red(text);
}
function yellow(text) {
    if (!text)
        throw new Error('1 argument expected.');
    return addon.yellow(text);
}
function green(text) {
    if (!text)
        throw new Error('1 arguement expected.');
    return addon.green(text);
}
function blue(text) {
    if (!text)
        throw new Error('1 arguement expected.');
    return addon.blue(text);
}
function black(text) {
    if (!text)
        throw new Error('1 arguement expected.');
    return addon.black(text);
}
function magenta(text) {
    if (!text)
        throw new Error('1 arguement expected.');
    return addon.magenta(text);
}
module.exports = {
    red: red,
    yellow: yellow,
    green: green,
    blue: blue,
    black: black,
    magenta: magenta
};
