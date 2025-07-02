#include <iostream>
#include <string>

#include <stdlib.h>

int main() {
	using namespace std::literals::string_literals;

	const char* name1 = u8"Shaunak";
	const wchar_t* name2 = L"Shaunak";

	const char16_t* name3 = u"Shaunak";
	const char32_t* name4 = U"Shaunak";

	std::u32string name0 = U"Shaunak"s + U" Shandilya";

	const char* example = R"(Line1
Line2
Line3
Line4)";

	const char* example2 = "(Line1\n"
						 "Line2\n"
						 "Line3\n"
		"Line4)";
	return 0;
}
