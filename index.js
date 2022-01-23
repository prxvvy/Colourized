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
    bgRed: addon.bgRed
};
var Colourized = /** @class */ (function () {
    function Colourized() {
        this.str = [];
        var ref = Object.assign({}, colours);
        var all = Object.keys(ref);
        all.forEach(function (func) {
            var _a;
            var obj = (_a = {},
                _a[func] = {
                    get: function () {
                        var _this = this;
                        // @ts-ignore
                        this.str.push(ref[func]);
                        var colorIt = function (text) {
                            if (!text)
                                throw new Error('1 argument expected.');
                            // @ts-ignore
                            for (var _i = 0, _a = _this.str.reverse(); _i < _a.length; _i++) {
                                var func_1 = _a[_i];
                                text = func_1(text);
                            }
                            return text;
                        };
                        colorIt.__proto__ = this;
                        return colorIt;
                    }
                },
                _a);
            Object.defineProperties(Colourized.prototype, obj);
        });
    }
    return Colourized;
}());
module.exports = new Colourized();
