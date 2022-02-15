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

#include "include/colours.h"

#include "include/color_codes.h"
#include "include/utils.h"

char *Red(char *p_str) { return Concatenate(ESC, RED, p_str, RESET); }

char *Yellow(char *p_str) { return Concatenate(ESC, YELLOW, p_str, RESET); }

char *Green(char *p_str) { return Concatenate(ESC, GREEN, p_str, RESET); }

char *Blue(char *p_str) { return Concatenate(ESC, BLUE, p_str, RESET); }

char *Black(char *p_str) { return Concatenate(ESC, BLACK, p_str, RESET); }

char *Magenta(char *p_str) { return Concatenate(ESC, MAGENTA, p_str, RESET); }

char *Grey(char *p_str) { return Concatenate(ESC, GREY, p_str, RESET); }

char *White(char *p_str) { return Concatenate(ESC, WHITE, p_str, RESET); }

char *Cyan(char *p_str) { return Concatenate(ESC, CYAN, p_str, RESET); }

char *LightRed(char *p_str) { return Concatenate(ESC, LIGHTRED, p_str, RESET); }

char *LightYellow(char *p_str) {
    return Concatenate(ESC, LIGHTYELLOW, p_str, RESET);
}

char *LightGreen(char *p_str) {
    return Concatenate(ESC, LIGHTGREEN, p_str, RESET);
}

char *LightBlue(char *p_str) {
    return Concatenate(ESC, LIGHTBLUE, p_str, RESET);
}

char *LightGrey(char *p_str) {
    return Concatenate(ESC, LIGHTGREY, p_str, RESET);
}

char *LightCyan(char *p_str) {
    return Concatenate(ESC, LIGHTCYAN, p_str, RESET);
}

char *LightMagenta(char *p_str) {
    return Concatenate(ESC, LIGHTMAGENTA, p_str, RESET);
}

char *LightWhite(char *p_str) {
    return Concatenate(ESC, LIGHTWHITE, p_str, RESET);
}

char *BgRed(char *p_str) { return Concatenate(ESC, BGRED, p_str, RESET); }

char *BgBlack(char *p_str) { return Concatenate(ESC, BGBLACK, p_str, RESET); }

char *BgGreen(char *p_str) { return Concatenate(ESC, BGGREEN, p_str, RESET); }

char *BgYellow(char *p_str) { return Concatenate(ESC, BGYELLOW, p_str, RESET); }

char *BgBlue(char *p_str) { return Concatenate(ESC, BGBLUE, p_str, RESET); }

char *BgMagenta(char *p_str) {
    return Concatenate(ESC, BGMAGENTA, p_str, RESET);
}

char *BgCyan(char *p_str) { return Concatenate(ESC, BGCYAN, p_str, RESET); }

char *BgWhite(char *p_str) { return Concatenate(ESC, BGWHITE, p_str, RESET); }

char *BgGrey(char *p_str) { return Concatenate(ESC, BGGREY, p_str, RESET); }

char *BgLightRed(char *p_str) {
    return Concatenate(ESC, BGLIGHTRED, p_str, RESET);
}

char *BgLightGreen(char *p_str) {
    return Concatenate(ESC, BGLIGHTGREEN, p_str, RESET);
}

char *BgLightYellow(char *p_str) {
    return Concatenate(ESC, BGLIGHTYELLOW, p_str, RESET);
}

char *BgLightBlue(char *p_str) {
    return Concatenate(ESC, BGLIGHTBLUE, p_str, RESET);
}

char *BgLightMagenta(char *p_str) {
    return Concatenate(ESC, BGLIGHTMAGENTA, p_str, RESET);
}

char *BgLightCyan(char *p_str) {
    return Concatenate(ESC, BGLIGHTCYAN, p_str, RESET);
}

char *BgLightWhite(char *p_str) {
    return Concatenate(ESC, BGLIGHTWHITE, p_str, RESET);
}

char *BgLightGrey(char *p_str) {
    return Concatenate(ESC, BGLIGHTGREY, p_str, RESET);
}

char *Underline(char *p_str) {
    return Concatenate(ESC, UNDERLINE, p_str, RESET);
}

char *Bold(char *p_str) { return Concatenate(ESC, BOLD, p_str, RESET); }

char *Dim(char *p_str) { return Concatenate(ESC, DIM, p_str, RESET); }

char *Italic(char *p_str) { return Concatenate(ESC, ITALIC, p_str, RESET); }

char *Inverse(char *p_str) { return Concatenate(ESC, INVERSE, p_str, RESET); }
