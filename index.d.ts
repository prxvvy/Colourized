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

declare namespace colorized_lib {
	export interface ColorizedFunction {
		(text: string): string;

		// Foreground
		black: ColorizedFunction;
		red: ColorizedFunction;
		yellow: ColorizedFunction;
		green: ColorizedFunction;
		blue: ColorizedFunction;
		magenta: ColorizedFunction;
		grey: ColorizedFunction;
		gray: ColorizedFunction;
		white: ColorizedFunction;
		cyan: ColorizedFunction;
		lightRed: ColorizedFunction;
		lightYellow: ColorizedFunction;
		lightBlue: ColorizedFunction;
		lightGreen: ColorizedFunction;
		lightGrey: ColorizedFunction;
		lightGray: ColorizedFunction;
		lightCyan: ColorizedFunction;
		lightMagenta: ColorizedFunction;
		lightWhite: ColorizedFunction;

		// Background
		bgRed: ColorizedFunction;
		bgBlack: ColorizedFunction;
		bgGreen: ColorizedFunction;
		bgYellow: ColorizedFunction;
		bgBlue: ColorizedFunction;
		bgMagenta: ColorizedFunction;
		bgCyan: ColorizedFunction;
		bgWhite: ColorizedFunction;
		bgGrey: ColorizedFunction;
		bgGray: ColorizedFunction;
		// Styles
		underline: ColorizedFunction;
	}

	// Foreground
	export const black: ColorizedFunction;
	export const red: ColorizedFunction;
	export const yellow: ColorizedFunction;
	export const green: ColorizedFunction;
	export const blue: ColorizedFunction;
	export const magenta: ColorizedFunction;
	export const grey: ColorizedFunction;
	export const gray: ColorizedFunction;
	export const white: ColorizedFunction;
	export const cyan: ColorizedFunction;
	export const lightRed: ColorizedFunction;
	export const lightYellow: ColorizedFunction;
	export const lightBlue: ColorizedFunction;
	export const lightGreen: ColorizedFunction;
	export const lightGrey: ColorizedFunction;
	export const lightGray: ColorizedFunction;
	export const lightCyan: ColorizedFunction;
	export const lightMagenta: ColorizedFunction;
	export const lightWhite: ColorizedFunction;

	// Background
	export const bgRed: ColorizedFunction;
	export const bgBlack: ColorizedFunction;
	export const bgGreen: ColorizedFunction;
	export const bgYellow: ColorizedFunction;
	export const bgBlue: ColorizedFunction;
	export const bgMagenta: ColorizedFunction;
	export const bgCyan: ColorizedFunction;
	export const bgWhite: ColorizedFunction;
	export const bgGrey: ColorizedFunction;
	export const bgGray: ColorizedFunction;
	// Styles
	export const underline: ColorizedFunction;
}

export = colorized_lib;
export as namespace colorized_lib;
