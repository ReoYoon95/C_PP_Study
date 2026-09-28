#include <iostream>

//struct는 공개, class는 프라이빗이 기본 옵션임 외에는 같음.
class Man {
public:
	//std::string name;
	//char name[10];
	int age;
	double weight;

};

class Dog {
	//private: 기본값으로 생략가능
	int age;

public:

	Dog(int age) {
		this->age = age;
	};

	int getAge() {
		return this->age;
	}

	void setAge(int age) {
		this->age = age;
	}

	void cry() {
		std::cout << "왈왈" << std::endl;
	}
};


//선언, 원형, prototype
int add(int, int);


int main() {
	//호출, call
	//int a = add(1, 2);
	//std::cout << a << std::endl;

	//int b = 5, c = 6, d;
	//d = add(b, c);
	//std::cout << d << std::endl;

	//struct class 생략가능
	//class는 기본 private 옵션이기에 위의 속성값을 public으로 하지 않으면 불러올 수 없음.
	//Man reo;
	//reo.age = 10;
	//reo.weight = 70;
	//std::cout << reo.age << "\t" << reo.weight << std::endl;

	//1살로 생성
	Dog coco(1);
	//나이 2로 재설정.
	coco.setAge(2);
	std::cout << "코코나이?: " << coco.getAge() << std::endl;
	// age는 private 상태이기에 함수로 불러올 수 있도록 위 처럼 만든다.
	//std::cout << coco.age << std::endl;

	//클래스 내부 함수인 cry 호출
	coco.cry();
}

//정의
int add(int num1, int num2) {
	return num1 + num2;
}