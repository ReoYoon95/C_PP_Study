#include <iostream>

class Dog {
	int age;

public:
	//void setAge(int a) {
	//	age = a;
	//}

	//int getAge() {
	//	return age;
	//}


	//클래스 내부 함수는 인라인함수 -> 
	// 간단한코드를 복제해서 가지고 오기떄문에 빠르나, 긴 코드는 용량이 늘어나서 밖으로 빼서 일반 함수로  처리하는 방법이 좋음.

	//클래스 내부 함수를 밖으로 빼기위해 선언
	void setAge(int a);
	int getAge();

};

int main2(void) {
	Dog coco;
	coco.setAge(1);
	std::cout << coco.getAge() << std::endl;

	return 0;
}


void Dog::setAge(int a) {
	age = a;
}


int Dog::getAge() {
	return age;
}