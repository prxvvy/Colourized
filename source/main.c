/*
* =================================================
*
*       Filename: main
*
*    Description:
*
*        Created: 11/01/2022
*
*        Author:  prxvvy (qsk55464@gmail.com)
*
*
* =================================================
*/

#include <node/node_api.h>
#include <stdlib.h>
#include <string.h>
#include "include/colours.h"
#include <stdio.h>

napi_value RedFunc(napi_env env, napi_callback_info info) {
    napi_status status;
    size_t argc = 1;
    napi_value argv[1];
    status = napi_get_cb_info(env, info, &argc, argv, NULL, NULL);
    if (status != napi_ok) {
        napi_throw_error(env, NULL, "1 argument expected.");
    }
    size_t str_size;
    size_t str_size_read;
    status = napi_get_value_string_utf8(env, argv[0], NULL, 0, &str_size);
    if (status != napi_ok) {
        napi_throw_type_error(env, NULL, "Invalid type param.");
    }
    char *buf = calloc(str_size + 1, sizeof(char));
    str_size = str_size + 1;
    status = napi_get_value_string_utf8(env, argv[0], buf, str_size, &str_size_read);
    if (status != napi_ok) {
        napi_throw_error(env, NULL, "Unable to create return value.");
    }
    char *p_newStr = Red(buf);
    napi_value result;
    status = napi_create_string_utf8(env, p_newStr, strlen(p_newStr), &result);
    free(buf);
    free(p_newStr);
    return result;
}

napi_value Init(napi_env env, napi_value exports) {
    napi_status status;
    napi_value fn;
    status = napi_create_function(env, NULL, 0, RedFunc, NULL, &fn);
    if (status != napi_ok) {
        napi_throw_error(env, NULL, "Unable to wrap native function.");
    }
    status = napi_set_named_property(env, exports, "red", fn);
     if (status != napi_ok) {
        napi_throw_error(env, NULL, "Unable to populate exports.");
    }
    return exports;
}

NAPI_MODULE(NODE_GYP_MODULE_NAME, Init)
