#include <iostream>
#include <type_traits>
#include <ct_str_t.hpp>

constexpr const char foo[] = "foo";	// const char[4]
constexpr const char* foo2 = "foo"; // const char*
constexpr const char bar[] = "bar";	// const char[4]
constexpr const char* bar2 = "bar";	// const char*

using foo_t =	ct_str_t(foo);
using foo2_t =	ct_str_t(foo2);
using bar_t =	ct_str_t(bar);
using bar2_t =	ct_str_t(bar2);

constexpr const wchar_t wfoo[] = L"foo"; // const wchar_t[4]
constexpr const wchar_t* wfoo2 = L"foo"; // const wchar_t*
constexpr const wchar_t wbar[] = L"bar"; // const wchar_t[4]
constexpr const wchar_t* wbar2 = L"bar"; // const wchar_t*

using wfoo_t =	ct_str_t(wfoo);
using wfoo2_t =	ct_str_t(wfoo);
using wbar_t =	ct_str_t(wbar);
using wbar2_t =	ct_str_t(wbar);

int main() {
	// types from the same strings with the same width are the same
	static_assert(std::is_same_v<foo_t, foo2_t>);
	static_assert(std::is_same_v<bar_t, bar2_t>);
	static_assert(std::is_same_v<wfoo_t, wfoo2_t>);
	static_assert(std::is_same_v<wbar_t, wbar2_t>);

	// types from different strings with the same width are different
	static_assert(not std::is_same_v<foo_t, bar2_t>);
	static_assert(not std::is_same_v<foo2_t, bar_t>);
	static_assert(not std::is_same_v<wfoo_t, wbar2_t>);
	static_assert(not std::is_same_v<wfoo2_t, wbar_t>);

	// types from the same strings with different width are the same
	static_assert(not std::is_same_v<foo_t, wfoo_t>);
	static_assert(not std::is_same_v<foo2_t, wfoo2_t>);
	static_assert(not std::is_same_v<bar_t, wbar_t>);
	static_assert(not std::is_same_v<bar2_t, wbar2_t>);

	// types from different strings with different width are the same
	static_assert(not std::is_same_v<foo_t, wbar_t>);
	static_assert(not std::is_same_v<foo2_t, wbar2_t>);
	static_assert(not std::is_same_v<bar_t, wfoo_t>);
	static_assert(not std::is_same_v<bar2_t, wfoo2_t>);
}