#include <iostream>

class Dog {
	int age;
	double weight;
	std::string name;

public:
	std::string getName() {
		return name;
	}

	void setName(std::string n) {
		name = n;
	}

	double getWeight() {
		return weight;
	}

	void setWeight(double w) {
		weight = w;
	}

	void setAge(int a) {
		age = a;
	}

	int getAge() {
		return age;
	}

	void bark() {
		std::cout << "멍멍\n";
	}

	Dog() {}
	~Dog() {

	}
};

int main3(void) {
	Dog choco;
	Dog coco;
	coco.setName("coco");
	choco.setName("choco");
	coco.setAge(1);
	choco.setAge(2);
	coco.setWeight(1.2);
	choco.setWeight(2.2);
	std::cout << "이름: " << coco.getName() << "나이 : " << coco.getAge() << "몸무게 : " << coco.getWeight() << std::endl;
	coco.bark();
	std::cout << "이름: " << choco.getName() << "나이 : " << choco.getAge() << "몸무게 : " << choco.getWeight() << std::endl;
	choco.bark();

	return 0;
}