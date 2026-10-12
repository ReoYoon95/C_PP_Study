#include <iostream>

int main4(void) {

	return 0;
}

int test1(void) {
	char s1[5];
	char s2[5] = "soft";
	strcpy_s(s1, s2); //배열 복사
	std::cout << "s1 = " << s1 << "  s2 = " << s2 << std::endl;
	return 0;
}

int test2(void) {
	std::string s1;
	std::string s2 = "soft";
	s1 = s2;
	std::cout << "s1=" << s1 << " s2 = " << s2;
	return 0;
}