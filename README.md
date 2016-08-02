## Why?

### Case 1

For usage inside C++ headers, where templates are defined.
If you want to use only `malloc` & `realloc`, it could be nice to only include 
(or forward declare) those.

Because of some complications of C++ throw qualifiers, it is
not fairly easy to forward declare some of the C standard library functions.

This library is plain simple - it wraps standard functions with `c_*` names
and places each function in separate header.
When you need `malloc`, yo either `#include <cstd/stdlib/malloc.h>` or
`void* c_malloc(size_t);` (of course you should also link with `libcstd`).

### Case 2

It is possible to wrap inclusion inside a namespace like:
```
namespace cstd {
# include <cstd/string/strcmp.h>
}

// now have cstd::c_strcmp
```

You can not actually do that with C standard library because most libraries expect them to be in global namespace.

### Case 3

It does not define tons of the messy preprocessor stuff.
