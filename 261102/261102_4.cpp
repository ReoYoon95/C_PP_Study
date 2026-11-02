#include<iostream>

//함수중첩을 하는 2가지 경우

//1. 파라미터의 타입만 다른경우
static int add(int i, int j)
{
	return (i + j);
}

static float add(float i, float j)
{
	return (i + j);
}

static double add(double i, double j)
{
	return (i + j);
}

//2. 파라미터의 갯수가 다른경우
//int add(int i, int j)
//{
//	return (i + j);
//}
static int add(int i, int j, int k)
{
	return (i + j + k);
}
static int add(int i, int j, int k, int l)
{
	return (i + j + k + l);
}

int main4()
{
	std::cout << "1.파라미터 타입이 다른경우\n";
	std::cout << add(1, 2) << std::endl;
	std::cout << add(1.3f, 2.6f) << std::endl;
	std::cout << add(6.5, 3.8) << std::endl;

	std::cout << "2.파라미터 갯수가 다른경우\n";
	std::cout << add(1, 2) << std::endl;
	std::cout << add(1, 2, 3) << std::endl;
	std::cout << add(1, 2, 3, 4) << std::endl;

	return 0;
}