#pragma once

#include <algorithm>

namespace __ct_str_t {
/// @brief Allows passing string literals as parameters.
/// @tparam Char - char type.
/// @tparam N - length of string (including null-terminator).
template<class Char, size_t N>
struct ct_str {
	/// @brief Type of character.
	///
	using char_t = Char;

	/// @brief Array based constructor.
	///
	constexpr ct_str(const char_t(&str)[N]) noexcept {
		std::copy_n(str, N, value);
	}
	/// @brief Pointer based constructor.
	///
	explicit constexpr ct_str(const char_t* str) noexcept {
		std::copy_n(str, N, value);
	}

	/// @brief Length of string.
	///
	static inline constexpr size_t length = N - 1;
	/// @brief Value of passed string.
	///
	char_t value[N];
};
}