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

#include "include/utils.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *Concatenate(char *p_esc, char *p_colorCode, char *p_input,
                  char *p_default) {
  size_t escLength = strlen(p_esc);
  size_t colorCodeLength = strlen(p_colorCode);
  size_t inputLength = strlen(p_input);
  size_t defaultLength = strlen(p_default);
  size_t totalLength =
      escLength + colorCodeLength + inputLength + defaultLength + 1;

  char *p_new_string = calloc(totalLength, sizeof(char));

  sprintf(p_new_string, "%s%s%s%s%s", p_esc, p_colorCode, p_input, p_esc,
          p_default);

  return p_new_string;
}
