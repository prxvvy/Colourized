"use strict";
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
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
var bindings_1 = __importDefault(require("bindings"));
var addon = (0, bindings_1["default"])('colorized_lib');
var black = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.black(txt);
};
var red = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.red(txt);
};
var yellow = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.yellow(txt);
};
var green = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.green(txt);
};
var blue = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.blue(txt);
};
var magenta = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.magenta(txt);
};
var grey = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.grey(txt);
};
var gray = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.grey(txt);
};
var white = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.white(txt);
};
var cyan = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.cyan(txt);
};
var lightRed = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.lightRed(txt);
};
var lightYellow = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.lightYellow(txt);
};
var lightGreen = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.lightGreen(txt);
};
var lightBlue = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.lightBlue(txt);
};
var lightGrey = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.lightGrey(txt);
};
var lightGray = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.lightGray(txt);
};
var lightCyan = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.lightCyan(txt);
};
var lightMagenta = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.lightMagenta(txt);
};
var lightWhite = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.lightWhite(txt);
};
var bgRed = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.bgRed(txt);
};
var bgBlack = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.bgBlack(txt);
};
var bgGreen = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.bgGreen(txt);
};
var bgYellow = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.bgYellow(txt);
};
var bgBlue = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.bgBlue(txt);
};
var bgMagenta = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.bgMagenta(txt);
};
var bgCyan = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.bgCyan(txt);
};
var bgWhite = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.bgWhite(txt);
};
var bgGrey = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.bgGrey(txt);
};
var bgGray = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.bgGray(txt);
};
var bgLightRed = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.bgLightRed(txt);
};
var bgLightGreen = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.bgLightGreen(txt);
};
var bgLightYellow = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.bgLightYellow(txt);
};
var bgLightBlue = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.bgLightBlue(txt);
};
var bgLightMagenta = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.bgLightMagenta(txt);
};
var bgLightCyan = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.bgLightCyan(txt);
};
var bgLightWhite = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.bgLightWhite(txt);
};
var bgLightGrey = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.bgLightGrey(txt);
};
var bgLightGray = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.bgLightGrey(txt);
};
var underline = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.underline(txt);
};
var bold = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.bold(txt);
};
var dim = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.dim(txt);
};
var italic = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.italic(txt);
};
var inverse = function (txt) {
    if (!txt)
        throw new Error('Must provide a content,');
    return addon.inverse(txt);
};
module.exports = {
    black: black,
    red: red,
    yellow: yellow,
    green: green,
    blue: blue,
    magenta: magenta,
    grey: grey,
    gray: gray,
    white: white,
    cyan: cyan,
    lightRed: lightRed,
    lightYellow: lightYellow,
    lightGreen: lightGreen,
    lightBlue: lightBlue,
    lightGrey: lightGrey,
    lightGray: lightGray,
    lightCyan: lightCyan,
    lightMagenta: lightMagenta,
    lightWhite: lightWhite,
    bgRed: bgRed,
    bgBlack: bgBlack,
    bgGreen: bgGreen,
    bgYellow: bgYellow,
    bgBlue: bgBlue,
    bgMagenta: bgMagenta,
    bgCyan: bgCyan,
    bgWhite: bgWhite,
    bgGray: bgGray,
    bgGrey: bgGrey,
    bgLightRed: bgLightRed,
    bgLightGreen: bgLightGreen,
    bgLightYellow: bgLightYellow,
    bgLightBlue: bgLightBlue,
    bgLightMagenta: bgLightMagenta,
    bgLightCyan: bgLightCyan,
    bgLightWhite: bgLightWhite,
    bgLightGrey: bgLightGrey,
    bgLightGray: bgLightGray,
    underline: underline,
    bold: bold,
    dim: dim,
    italic: italic,
    inverse: inverse
};
