#pragma once

namespace __ct_str_t {
/// @brief Character wrapper.
/// @brief Allows to use characters as distict types.
/// @tparam Char - type of character.
/// @tparam C - character.
template<class Char, Char C>
struct ct_c {
	/// @brief Type of character.
	///
	using char_t = Char;
	/// @brief Value of character
	///
	static inline constexpr char_t c = C;
};
}