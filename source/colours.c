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
#include "include/utils.h"

char *Red(char *str) {
    return concatenate("\033[31m", str, Clean());
}

char *Yellow(char *str) {
    return concatenate("\033[33m", str, Clean());
}

char *Clean() {
    return "\033[0m";
}
