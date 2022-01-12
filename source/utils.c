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

char *concatenate(const char *p_str1, const char *p_str2, const char *p_str3) {
    const size_t str1Length = strlen(p_str1);
    const size_t str2Length = strlen(p_str2);
    const size_t str3Length = strlen(p_str3);
    const size_t totalLength = str1Length + str2Length + str3Length + 1;
    char *const newStr = calloc(totalLength, sizeof(char));
    strcpy(newStr, p_str1);
    strcpy(newStr + str1Length, p_str2);
    strcpy(newStr + str1Length + str2Length, p_str3);
    return newStr;
}
