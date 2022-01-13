"use strict";
/*
 * =================================================
 *
 *       Filename: index
 *
 *    Description:
 *
 *        Created: 12/01/2022
 *
 *        Author:  prxvvy (qsk55464@gmail.com)
 *
 *
 * =================================================
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
module.exports = {
    red: red,
    yellow: yellow
};
