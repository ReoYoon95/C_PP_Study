#include <iostream>

template <class T> T Max(T i, T j)
{
	return (i > j) ? i : j; // i가 j보다 크면 i를, 아니면 j를 반환
}

int main3()
{
	std::cout << Max(1, 2) << std::endl;
	std::cout << Max(7.5, 3.6) << std::endl;
	std::cout << Max('A', 'B');
	return 0;
}