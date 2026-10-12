#include <iostream>
class Dog {
private:
	int age;
public:
	//Dog() { age = 1; } // 생성자 정의, Dog():age(1){ }, Dog():age{1}{ }   
	//Dog() : age(1) {} //2순위 
	Dog() :age{ 1 } {} // 1순위로 유니폼방식이 가장 적절
	int getAge() { return age; }
	void setAge(int a) { age = a; }
};

int main7()
{

	Dog happy;   //happy객체가 생성되는 순간 생성자가 자동 호출됨
	std::cout << happy.getAge();

	return 0;
}