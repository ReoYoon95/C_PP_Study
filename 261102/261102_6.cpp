#define _CRT_SECURE_NO_WARNINGS // sscanf()함수 오류 제거
#include <stdio.h>   // sscanf()함수 선언        
#include <iostream>

class Date {
	int day, month, year;

public:

	//% c : 문자 1개를 읽어서 변수에 저장한다.
	//% *c : 문자 1개를 읽어서 그냥 버린다(저장할 변수 주소를 전달할 필요 없음).

	Date(const char* s) { sscanf(s, "%d%*c%d%*c%d", &month, &day, &year); }
	Date(int m, int d, int y) { day = d; month = m; year = y; }
	void print() { std::cout << year << "년 " << month << "월 " << day << "일" << std::endl; }
};

int main6()
{
	Date d1("11/29/2026");
	Date d2(11, 30, 2026);
	d1.print();
	d2.print();
	return 0;
}