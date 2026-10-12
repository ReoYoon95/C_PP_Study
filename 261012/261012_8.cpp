#include <iostream>
class Dog {
private:
	int age;
public:
	Dog(int a) : age{ a } {
		std::cout << "멍\n";
	}
	~Dog() { std::cout << "소멸\n"; }
	// 소멸자 정의
	int getAge() { return age; }
	void setAge(int a) { age = a; }
};

int main8()
{
	Dog happy(5);
	std::cout << "main함수 시작\n";
	std::cout << happy.getAge();
	std::cout << "\nmain함수 끝\n";
	return 0;
}