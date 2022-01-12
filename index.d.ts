/*
 * =================================================
 *
 *       Filename: index.d
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

declare namespace colorized_lib {
	interface ColorizedFunction {
		(...text: unknown[]): string;
	}

	export const red: ColorizedFunction;

	export const yellow: ColorizedFunction;
}

export = colorized_lib;
export as namespace colorized_lib;
