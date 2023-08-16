# `ct_strs` - Create distinct types in C++ just from compile time string

## Installation
ct_strs is a header only library.

Install it with `git submodule`:
```bash
git submodule add 'https://github.com/Chris-plusplus/ct_strs' <extern_dir>/ct_strs
```

And simply include it:
```c++
#include <ct_strs.hpp>
```

### Usage

```c++
using my_type = ct_str_t("my_type");
using my_wtype = ct_wstr_t(L"my_type");

// name of type
constexpr const char* name = my_type::name;
// length of name
constexpr size_t len = my_type::length;
```
