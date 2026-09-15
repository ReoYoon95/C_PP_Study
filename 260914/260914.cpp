#include <iostream>
//이건 std사용하는 대신에 제외 할 수 있도록 하는 방식이나 잘 사용하지 않음
//using namespace std;
//using std::cout;
//using std::endl;

int main() {
	int x;
	std::cout << "숫자하나 입력" << std::endl;
	std::cin >> x;
	std::cout << "입력값은" << x << std::endl;

	return 0;
}

void age_print() {
	int age;
	std::cout << "나이를 입력하시오" << std::endl;
	std::cin >> age;
	std::cout << "당신의 나이는" << age << std::endl;

}

void test_1() {
	int x = 3;
	std::cout << x;
	x = 10;
	std::cout << x;

}

void test_2() {
	int x = 3, y = 4;
	//캐스트 연산자
	std::cout << (double)y / x;

}
