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

#include <node/js_native_api.h>
#include <node/node_api.h>
#include "include/colour_node.h"

napi_value Init(napi_env env, napi_value exports) {
    napi_status status;
    napi_value func;
    
    status = napi_create_function(env, NULL, 0, RedIt, NULL, &func);
    if (status != napi_ok) {
        napi_throw_error(env, NULL, "Unable to wrap native function.");
    }
    status = napi_set_named_property(env, exports, "red", func);
     if (status != napi_ok) {
        napi_throw_error(env, NULL, "Unable to populate exports.");
    }

    status = napi_create_function(env, NULL, 0, YellowIt, NULL, &func);
    if (status != napi_ok) {
        napi_throw_error(env, NULL, "Unable to wrap native function.");
    }
    status = napi_set_named_property(env, exports, "yellow", func);
     if (status != napi_ok) {
        napi_throw_error(env, NULL, "Unable to populate exports.");
    }

    return exports;
}

NAPI_MODULE(NODE_GYP_MODULE_NAME, Init)
