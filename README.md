# `ct_str_t` - Create distinct types in C++ just from compile time string

## Installation
ct_str_t is a header only library.

Install it with `git submodule`:
```bash
git submodule add 'https://github.com/Chris-plusplus/ct_str_t' <extern_dir>/ct_str_t
```

And simply include it:
```c++
#include <ct_str_t.hpp>
```

### Usage

```c++
using my_type = ct_str_t("my_type");
using my_wtype = ct_str_t(L"my_type");

// name of type
constexpr const char* name = my_type::name;
// length of name
constexpr size_t len = my_type::length;
```
