#include <iostream>
class Dog {
private:
	int age = 1; //C++11부터 가능, 기본 멤버 초기화(Default Member Initialization)
public:
	int getAge();
	void setAge(int a);
	//Dog(){} 
	//생성자가 없으면 컴파일러가 자동으로 만들어주는 암시적 기본 생성자(Implicit Default Constructor)
};
int Dog::getAge() { return age; }
void Dog::setAge(int a) { age = a; }

int main6()
{
	Dog happy, coco;
	std::cout << happy.getAge() << " " << coco.getAge();
	return 0;
}