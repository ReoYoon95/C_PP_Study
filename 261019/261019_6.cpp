#include <iostream>

class Cat {
	int age;
	std::string name;
public:

	Cat(int a, std::string n) :age{ a }, name{ n } {

	}

	//Cat(int age, std::string name) {
	//	this->age = age;
	//	this->name = name;
	//}

	~Cat() {
		std::cout << "bye~~~\n";
	}

	void cry() const;

	void setName(std::string n);

	std::string getName() const;

	void setAge(int a);

	int getAge() const;

};



void Cat::cry() const {
	std::cout << "야옹ㅇㅇㅇ\n";
}

void Cat::setName(std::string n) {
	name = n;
}

std::string Cat::getName() const {
	return name;

}

void Cat::setAge(int a) {
	age = a;

}

int Cat::getAge() const {
	return age;
}

int main(void) {

	Cat nabi(3, "야옹이");
	//nabi.setAge(1);
	//nabi.setName("nabi");
	std::cout << nabi.getName() << "  " << nabi.getAge() << std::endl;
	nabi.setAge(1);
	nabi.setName("나비");
	std::cout << nabi.getName() << "  " << nabi.getAge() << std::endl;
	nabi.cry();

	return 0;
}