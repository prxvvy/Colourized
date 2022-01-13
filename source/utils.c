/*
* =================================================
*
*       Filename: utils
*
*    Description:
*
*        Created: 10/01/2022
*
*        Author:  prxvvy (qsk55464@gmail.com)
*
*
* =================================================
*/

#include <stdlib.h>
#include <string.h>
#include "include/utils.h"

char *Colorify(char *p_esc, char *p_colorCode, char *p_input, char *p_default) {
    size_t escLength = strlen(p_esc);
    size_t colorCodeLength = strlen(p_colorCode);
    size_t inputLength = strlen(p_input);
    size_t defaultLength = strlen(p_default);
    size_t totalLength = escLength + colorCodeLength + inputLength + defaultLength + 1;
    char *p_newString = calloc(totalLength, sizeof(char));
    strcpy(p_newString, p_esc);
    strcpy(p_newString + escLength, p_colorCode);
    strcpy(p_newString + escLength + colorCodeLength, p_input);
    strcpy(p_newString + escLength + colorCodeLength + inputLength, p_esc);
    strcpy(p_newString + escLength + colorCodeLength + inputLength + escLength, p_default);
    return p_newString;
}
