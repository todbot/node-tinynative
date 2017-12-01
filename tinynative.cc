#include <nan.h>
#include <stdio.h>

#define USE_ATEXIT 1

using namespace v8;
using namespace node;

#if USE_ATEXIT
static void
deinitialize(void*)
{
  printf("tinynative deinitialize\n");
}
#endif

NAN_METHOD(Print) {
  if (!info[0]->IsString()) return Nan::ThrowError("Must pass a string");
  Nan::Utf8String path(info[0]);
  printf("tinynative: %s\n", *path);
}

NAN_MODULE_INIT(InitAll) {

  Nan::Set(target, Nan::New<String>("print").ToLocalChecked(), Nan::GetFunction(Nan::New<FunctionTemplate>(Print)).ToLocalChecked());

#if USE_ATEXIT
  node::AtExit(deinitialize);
#endif
}

NODE_MODULE(tinynative, InitAll)
