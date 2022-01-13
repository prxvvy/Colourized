/*
* =================================================
*
*       Filename: colours
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

#include "include/colours.h" 
#include "include/colours.h"
#include "include/utils.h"
#include "include/color_codes.h"

char *Red(char *p_str) {
    return Colorify(ESC, RED, p_str, RESET);
}

char *Yellow(char *p_str) {
    return Colorify(ESC, YELLOW, p_str, RESET);
}
