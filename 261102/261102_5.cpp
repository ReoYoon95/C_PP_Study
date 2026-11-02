#include <iostream>
using std::cout;
using std::endl;

namespace {
	class Dog {
	private:
		int age;
	public:
		Dog() { age = 1; }
		// 매개변수가없는생성자

		Dog(int a) { age = a; }
		// 매개변수가하나인생성자

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

int main5()
{
	Dog happy[5];
	Dog meri[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++)
		std::cout << happy[i].getAge() <<
		"," << meri[i].getAge() << std::endl;
	return 0;
}