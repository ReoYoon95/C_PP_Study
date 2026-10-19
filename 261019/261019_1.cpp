//#include <iostream>
//
//class Dog {
//	int age;
//	double weight;
//	std::string name;
//
//public:
//	int getAge() {
//		return age;
//	}
//
//	void setAge(int a) {
//		age = a;
//	}
//
//	int getWeight() {
//		return weight;
//	}
//
//	void setWeight(double w) {
//		weight = w;
//	}
//
//	std::string getName() {
//		return name;
//	}
//
//	void setName(std::string n) {
//		name = n;
//	}
//
//	void cry() {
//		std::cout << "멍멍\n";
//	}
//
//	Dog() {
//
//	}
//
//	Dog(int a, int w, std::string n) :age(a), weight(w), name(n) {
//
//	}
//};
//
//int main(void) {
//
//	Dog coco;
//	//coco.age = 1;
//	coco.setAge(1);
//	coco.setWeight(2.5);
//	coco.setName("코코");
//	std::cout << "코코의 이름은 : " << coco.getName() << "\ncoco의 나이는 : " << coco.getAge() << "\ncoco의 몸무게는 : " << coco.getWeight() << std::endl;
//
//	return 0;
//}