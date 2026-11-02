#include<iostream>

namespace {
	class Dog {
	private:
		int age;

	public:
		Dog(int a = 1) { age = a; }
		// 디폴트매개변수를갖는생성자
		//Dog() {
		//	age = 1;
		//}
		~Dog();
		int getAge();
		void setAge(int a);
	};
}

Dog::~Dog()
{
	std::cout << "소멸\n";
}

int Dog::getAge()
{
	return age;
}
void Dog::setAge(int a)
{
	age = a;
}
int main8()
{
	Dog meri, happy(5);
	std::cout << happy.getAge() << "," <<
		meri.getAge() << std::endl;
	return 0;
}