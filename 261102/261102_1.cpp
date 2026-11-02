#include <iostream>

int add(int i, int j)
{
	return (i + j);
}

double add(double i, double j)
{
	return (i + j);
}

//이건 컴파일에러-> 컴파일러가 파라미터만 보고 판단하는데 같은 자료형이 있기에 오류.
//double add(int i, int j)
//{
//	return ((double)i + (double)j);
//}

int main1(void) {
	std::cout << add(10, 20) << std::endl;
	std::cout << add(10.5, 20.3) << std::endl;
	return 0;

}