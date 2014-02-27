#ifndef NODE_HELLO_H
#define NODE_HELLO_H

#include <v8.h>

namespace node{
	v8::Handle<v8::Value> SayHello(const v8::Arguments& args);
}
#endif

