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

    status = napi_create_function(env, NULL, 0, GreenIt, NULL, &func);
    if (status != napi_ok) {
        napi_throw_error(env, NULL, "Unable to wrap native function.");
    }
    status = napi_set_named_property(env, exports, "green", func);
     if (status != napi_ok) {
        napi_throw_error(env, NULL, "Unable to populate exports.");
    }

    status = napi_create_function(env, NULL, 0, BlueIt, NULL, &func);
    if (status != napi_ok) {
        napi_throw_error(env, NULL, "Unable to wrap native function.");
    }
    status = napi_set_named_property(env, exports, "blue", func);
     if (status != napi_ok) {
        napi_throw_error(env, NULL, "Unable to populate exports.");
    }

    return exports;
}

NAPI_MODULE(NODE_GYP_MODULE_NAME, Init)
