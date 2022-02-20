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
var colours = {
    // Foreground
    black: addon.black,
    red: addon.red,
    yellow: addon.yellow,
    green: addon.green,
    blue: addon.blue,
    magenta: addon.magenta,
    grey: addon.grey,
    gray: addon.grey,
    white: addon.white,
    cyan: addon.cyan,
    lightRed: addon.lightRed,
    lightYellow: addon.lightYellow,
    lightGreen: addon.lightGreen,
    lightBlue: addon.lightBlue,
    lightGrey: addon.lightGrey,
    lightGray: addon.lightGrey,
    lightCyan: addon.lightCyan,
    lightMagenta: addon.lightMagenta,
    lightWhite: addon.lightWhite,
    // Background
    bgRed: addon.bgRed,
    bgBlack: addon.bgBlack,
    bgGreen: addon.bgGreen,
    bgYellow: addon.bgYellow,
    bgBlue: addon.bgBlue,
    bgMagenta: addon.bgMagenta,
    bgCyan: addon.bgCyan,
    bgWhite: addon.bgWhite,
    bgGrey: addon.bgGrey,
    bgGray: addon.bgGrey,
    bgLightRed: addon.bgLightRed,
    bgLightGreen: addon.bgLightGreen,
    bgLightYellow: addon.bgLightYellow,
    bgLightBlue: addon.bgLightBlue,
    bgLightMagenta: addon.bgLightMagenta,
    bgLightCyan: addon.bgLightCyan,
    bgLightWhite: addon.bgLightWhite,
    bgLightGrey: addon.bgLightGrey,
    bgLightGray: addon.bgLightGrey
};
var styles = {
    underline: addon.underline,
    bold: addon.bold,
    dim: addon.dim,
    italic: addon.italic,
    inverse: addon.inverse
};
var Colourized = /** @class */ (function () {
    function Colourized() {
        var _this = this;
        this.str = [];
        var ref = Object.assign({}, colours, styles);
        var all = Object.keys(ref);
        all.forEach(function (func) {
            var _a;
            var obj = (_a = {},
                _a[func] = {
                    str: _this.str,
                    get: function () {
                        var _this = this;
                        this.str.push(ref[func]);
                        var colourIt = function (txt) {
                            if (!txt)
                                throw new Error('1 argument expected.');
                            for (var _i = 0, _a = _this.str.reverse(); _i < _a.length; _i++) {
                                var funcName = _a[_i];
                                txt = funcName(txt);
                            }
                            _this.str.length = 0;
                            return txt;
                        };
                        colourIt.__proto__ = this;
                        return colourIt;
                    }
                },
                _a);
            Object.defineProperties(Colourized.prototype, obj);
        });
    }
    return Colourized;
}());
module.exports = new Colourized();
