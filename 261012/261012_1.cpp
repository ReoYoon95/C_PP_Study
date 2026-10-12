#include <iostream>

class Man {
	//private: 접근속성이라고 한다.(기본설정)
	int age;
public:
	Man() : age(0) {}

	Man(int a) : age(a) {}

public:
	int getAge() {
		return age;
	}
	void setAge(int a) {
		age = a;
	}

};

int main(void) {

	Man man(5);
	man.setAge(10);
	std::cout << man.getAge() << std::endl;




	return 0;
}