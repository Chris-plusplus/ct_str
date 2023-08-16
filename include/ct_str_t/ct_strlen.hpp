#pragma once

namespace __ct_str_t {
/// @brief Gets length of null-terminated character string.
/// @tparam Char - any type supporting null-terminated strings.
/// @param str - string to obtain length of.
template<class Char>
constexpr size_t ct_strlen(const Char* str) {
	size_t length{};
	for (; *str; ++str, ++length);
	return length;
}
}