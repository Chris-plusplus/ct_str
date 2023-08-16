#pragma once

#include "v_str.hpp"

namespace __ct_str_t {
/// @brief Helper wrapper.
///
template<class Char, ct_str Str>
using ct_str_to_t = __ct_str_to_t<Char, Str>;
}