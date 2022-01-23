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

/**
 * @author      : prxvvy (qsk55464@gmail.com)
 * @created     : 13/01/2022
 * @filename    : color_codes
 */
#ifndef COLOR_CODES_H
#define COLOR_CODES_H

typedef enum COLOURS {
	RED_,
	BLUE_,
	YELLOW_,
	GREEN_,
	CYAN_,
	BLACK_,
	MAGENTA_,
	GREY_,
	WHITE_,
	LIGHTRED_,
	LIGHTYELLOW_,
	LIGHTGREEN_,
	LIGHTBLUE_,
	LIGHTGREY_,
	LIGHTCYAN_,
	LIGHTMAGENTA_,
	LIGHTWHITE_,

	BGRED_,
} Colours;

typedef enum STYLES {
	UNDERLINE_,
} Styles;

// Foreground
#define RED "[31m"
#define YELLOW "[33m"
#define GREEN "[32m"
#define BLACK "[30m"
#define BLUE "[34m"
#define CYAN "[36m"
#define MAGENTA "[35m"
#define GREY "[90m"
#define WHITE "[97m"
#define LIGHTRED "[91m"
#define LIGHTYELLOW "[93m"
#define LIGHTGREEN "[92m"
#define LIGHTBLUE "[94m"
#define LIGHTGREY "[37m"
#define LIGHTCYAN "[96m"
#define LIGHTMAGENTA "[95m"
#define LIGHTWHITE "[97m"

// Background
#define BGRED "[41m"

// Styles

// ESC 
#define ESC "\033"
// Reset
#define RESET "[0m"

#endif /* COLOR_CODES_H */
