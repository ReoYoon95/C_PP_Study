#include<iostream>

//Max()함수가매개변수로int, double, char 등을모두가질수있도록함수를중첩시키시오.

int Max(int i, int j)
{
	return i > j ? i : j;
}
double Max(double i, double j)
{
	return i > j ? i : j;
}
char Max(char i, char j)
{
	return i > j ? i : j;
}

int main2()
{
	std::cout << Max(1, 2) << std::endl;
	std::cout << Max(7.5, 3.6) << std::endl;
	std::cout << Max('A', 'B');
	return 0;
}