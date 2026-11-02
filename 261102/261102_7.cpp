#include <iostream>

//선언부는 디폴트값 입력.
static int add(int i = 1, int j = 2);

int main7()
{
	std::cout << add() << ",";
	std::cout << add(10) << ",";
	std::cout << add(10, 20);
	return 0;
}

//int add(int i = 1, int j)는 컴파일 에러로 불가능하며, 
// int add(int i, int j = 2)는 정상 작동하여 가능합니다.
// 디폴트 인자는 무조건 '오른쪽 매개변수부터' 채워야 하기 때문입니다.

int add(int i, int j)
{
	return(i + j);
}