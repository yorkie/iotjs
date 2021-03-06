/* Copyright 2015-present Samsung Electronics Co., Ltd. and other contributors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef IOTJS_MODULE_BUFFER_H
#define IOTJS_MODULE_BUFFER_H


typedef struct {
  jerry_value_t jobject;
  char* buffer;
  size_t length;
} iotjs_bufferwrap_t;


iotjs_bufferwrap_t* iotjs_bufferwrap_create(const jerry_value_t jbuiltin,
                                            size_t length);

iotjs_bufferwrap_t* iotjs_bufferwrap_from_jbuffer(const jerry_value_t jbuffer);

size_t iotjs_bufferwrap_length(iotjs_bufferwrap_t* bufferwrap);

int iotjs_bufferwrap_compare(const iotjs_bufferwrap_t* bufferwrap,
                             const iotjs_bufferwrap_t* other);

size_t iotjs_bufferwrap_copy(iotjs_bufferwrap_t* bufferwrap, const char* src,
                             size_t len);
iotjs_bufferwrap_t* iotjs_jbuffer_get_bufferwrap_ptr(const jerry_value_t);

// Create buffer object.
jerry_value_t iotjs_bufferwrap_create_buffer(size_t len);


#endif /* IOTJS_MODULE_BUFFER_H */
