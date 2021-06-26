#include "shell/browser/api/electron_api_visible_region.h"

#include <stdio.h>

#include "shell/common/node_includes.h"
#include "v8/include/v8.h"

namespace {

void Initialize(v8::Local<v8::Object> exports,
                v8::Local<v8::Value> unused,
                v8::Local<v8::Context> context,
                void* priv) {
  printf("TODO electron_api_visible_region %s\n", __FUNCTION__);
}

}  // namespace

NODE_LINKED_MODULE_CONTEXT_AWARE(electron_common_visible_region, Initialize)
