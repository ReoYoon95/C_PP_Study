#include <iostream>

class Dog {
private:
	int age;
public:
	int getAge() { return age; }  //자동 inline함수
	void setAge(int a) { age = a; } //자동 inline함수
};
int main5()
{
	int i;
	Dog dd[5];     //Dog클래스형 객체배열 dd, 강아지 5마리
	for (i = 0; i < 5; i++) {
		dd[i].setAge(1);
		std::cout << dd[i].getAge();   //01234
	}
	return 0;
}