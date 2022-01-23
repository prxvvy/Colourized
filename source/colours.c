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

#include "include/colours.h"
#include "include/utils.h"
#include "include/color_codes.h"

char *Red(char *p_str) {
    return Colorify(ESC, RED, p_str, RESET);
}

char *Yellow(char *p_str) {
    return Colorify(ESC, YELLOW, p_str, RESET);
}

char *Green(char *p_str) {
    return Colorify(ESC, GREEN, p_str, RESET);
}

char *Blue(char *p_str) {
    return Colorify(ESC, BLUE, p_str, RESET);
}

char *Black(char *p_str) {
    return Colorify(ESC, BLACK, p_str, RESET);
}

char *Magenta(char *p_str) {
    return Colorify(ESC, MAGENTA, p_str, RESET);
}

char *Grey(char *p_str) {
    return Colorify(ESC, GREY, p_str, RESET);
}

char *White(char *p_str) {
    return Colorify(ESC, WHITE, p_str, RESET);
}

char *Cyan(char *p_str) {
    return Colorify(ESC, CYAN, p_str, RESET);
}

char *LightRed(char *p_str) {
    return Colorify(ESC, LIGHTRED, p_str, RESET);
}

char *LightYellow(char *p_str) {
    return Colorify(ESC, LIGHTYELLOW, p_str, RESET);
}

char *LightGreen(char *p_str) {
    return Colorify(ESC, LIGHTGREEN, p_str, RESET);
}

char *LightBlue(char *p_str) {
    return Colorify(ESC, LIGHTBLUE, p_str, RESET);
}

char *LightGrey(char *p_str) {
    return Colorify(ESC, LIGHTGREY, p_str, RESET);
}

char *LightCyan(char *p_str) {
    return Colorify(ESC, LIGHTCYAN, p_str, RESET);
}

char *LightMagenta(char *p_str) {
    return Colorify(ESC, LIGHTMAGENTA, p_str, RESET);
}

char *LightWhite(char *p_str) {
    return Colorify(ESC, LIGHTWHITE, p_str, RESET);
}

char *BgRed(char *p_str) {
    return Colorify(ESC, BGRED, p_str, RESET);
}


