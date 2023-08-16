#pragma once

#include <type_traits>

namespace __ct_str_t {
template<class T>
using base_type = std::remove_extent_t<std::remove_cvref_t<std::remove_pointer_t<T>>>;
}