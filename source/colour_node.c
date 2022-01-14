/* Colorized - A program to add colour to Node.js console output. 
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

#include <node/node_api.h>
#include <stdlib.h>
#include <string.h>
#include "include/colours.h"

napi_value RedIt(napi_env env, napi_callback_info info) {
    napi_status status;
    size_t argc = 1;
    napi_value argv[1];

    napi_get_cb_info(env, info, &argc, argv, NULL, NULL);

    if (argc < 1) {
        napi_throw_error(env, NULL, "1 argument expected.");
        return NULL;
    }

    size_t strSize, strSizeRead;

    status = napi_get_value_string_utf8(env, argv[0], NULL, 0, &strSize);
    if (status != napi_ok) {
        napi_throw_error(env, NULL, "String expected.");
        return NULL;
    }

    char *p_buf = calloc(strSize + 1, sizeof(char));
    strSize = strSize + 1;

    status = napi_get_value_string_utf8(env, argv[0], p_buf, strSize, &strSizeRead);
    if (status != napi_ok) {
        napi_throw_error(env, NULL, "String expected.");
        return NULL;
    }

    char *p_colouredString = Red(p_buf);
    napi_value res;

    status = napi_create_string_utf8(env, p_colouredString, strlen(p_colouredString), &res);
    if (status != napi_ok) {
        napi_throw_error(env, NULL, "Unabled to create return value.");
        return NULL;
    }

    free(p_buf);
    free(p_colouredString);
    return res;
}

napi_value YellowIt(napi_env env, napi_callback_info info) {
    napi_status status;
    size_t argc = 1;
    napi_value argv[1];

    napi_get_cb_info(env, info, &argc, argv, NULL, NULL);

    if (argc < 1) {
        napi_throw_error(env, NULL, "1 argument expected.");
        return NULL;
    }

    size_t strSize, strSizeRead;

    status = napi_get_value_string_utf8(env, argv[0], NULL, 0, &strSize);
    if (status != napi_ok) {
        napi_throw_error(env, NULL, "String expected.");
        return NULL;
    }

    char *p_buf = calloc(strSize + 1, sizeof(char));
    strSize = strSize + 1;

    status = napi_get_value_string_utf8(env, argv[0], p_buf, strSize, &strSizeRead);
    if (status != napi_ok) {
        napi_throw_error(env, NULL, "String expected.");
        return NULL;
    }

    char *p_colouredString = Yellow(p_buf);
    napi_value res;

    status = napi_create_string_utf8(env, p_colouredString, strlen(p_colouredString), &res);
    if (status != napi_ok) {
        napi_throw_error(env, NULL, "Unabled to create return value.");
        return NULL;
    }

    free(p_buf);
    free(p_colouredString);
    return res;
}

napi_value GreenIt(napi_env env, napi_callback_info info) {
    napi_status status;
    size_t argc = 1;
    napi_value argv[1];

    napi_get_cb_info(env, info, &argc, argv, NULL, NULL);

    if (argc < 1) {
        napi_throw_error(env, NULL, "1 argument expected.");
        return NULL;
    }

    size_t strSize, strSizeRead;

    status = napi_get_value_string_utf8(env, argv[0], NULL, 0, &strSize);
    if (status != napi_ok) {
        napi_throw_error(env, NULL, "String expected.");
        return NULL;
    }

    char *p_buf = calloc(strSize + 1, sizeof(char));
    strSize = strSize + 1;

    status = napi_get_value_string_utf8(env, argv[0], p_buf, strSize, &strSizeRead);
    if (status != napi_ok) {
        napi_throw_error(env, NULL, "String expected.");
        return NULL;
    }

    char *p_colouredString = Green(p_buf);
    napi_value res;

    status = napi_create_string_utf8(env, p_colouredString, strlen(p_colouredString), &res);
    if (status != napi_ok) {
        napi_throw_error(env, NULL, "Unabled to create return value.");
        return NULL;
    }

    free(p_buf);
    free(p_colouredString);
    return res;
}

napi_value BlueIt(napi_env env, napi_callback_info info) {
    napi_status status;
    size_t argc = 1;
    napi_value argv[1];

    napi_get_cb_info(env, info, &argc, argv, NULL, NULL);

    if (argc < 1) {
        napi_throw_error(env, NULL, "1 argument expected.");
        return NULL;
    }

    size_t strSize, strSizeRead;

    status = napi_get_value_string_utf8(env, argv[0], NULL, 0, &strSize);
    if (status != napi_ok) {
        napi_throw_error(env, NULL, "String expected.");
        return NULL;
    }

    char *p_buf = calloc(strSize + 1, sizeof(char));
    strSize = strSize + 1;

    status = napi_get_value_string_utf8(env, argv[0], p_buf, strSize, &strSizeRead);
    if (status != napi_ok) {
        napi_throw_error(env, NULL, "String expected.");
        return NULL;
    }

    char *p_colouredString = Blue(p_buf);
    napi_value res;

    status = napi_create_string_utf8(env, p_colouredString, strlen(p_colouredString), &res);
    if (status != napi_ok) {
        napi_throw_error(env, NULL, "Unabled to create return value.");
        return NULL;
    }

    free(p_buf);
    free(p_colouredString);
    return res;
}