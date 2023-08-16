#pragma once

#include "v_str.hpp"
#include "base_type.hpp"
#include <type_traits>

#ifdef ct_str_t
#error ct_str_t was predefined
#else
#define ct_str_t(str) \
__ct_str_t::ct_str_to_t<__ct_str_t::base_type<decltype(str)>, __ct_str_t::ct_str<__ct_str_t::base_type<decltype(str)>, __ct_str_t::ct_strlen(str) + 1>((const __ct_str_t::base_type<decltype(str)>*)str)>
#endif