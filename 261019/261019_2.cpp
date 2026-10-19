//#include <iostream>
//
//class Dog {
//	int age;
//	double weight;
//	std::string name;
//
//public:
//	int getAge() const;
//
//	void setAge(int a);
//
//	int getWeight() const;
//
//	void setWeight(double w);
//
//	std::string getName() const;
//
//	void setName(std::string n);
//
//	void cry() const;
//
//	Dog() {
//
//	}
//
//	Dog(int a, double w, std::string n) :age(a), weight(w), name(n) {
//
//	}
//
//	//Dog(int a, double w, std::string n) {
//	//	this->age = a;
//	//	this->weight = w;
//	//	this->name = n
//	//}
//
//	//Dog() {
//	//	age = 1;
//	//	weight = 1.1;
//	//	name = "멍멍이";
//	//}
//
//	~Dog() {
//		std::cout << "bye~" << std::endl;
//
//	}
//};
//
//int Dog::getAge() const {
//	return age;
//}
//
//void Dog::setAge(int a) {
//	age = a;
//}
//
//int Dog::getWeight() const {
//	return weight;
//}
//
//void Dog::setWeight(double w) {
//	weight = w;
//}
//
//std::string Dog::getName() const {
//	return name;
//}
//
//void Dog::setName(std::string n) {
//	name = n;
//}
//
//void Dog::cry() const {
//	std::cout << "멍멍\n";
//}
//
//
//int main(void) {
//
//	Dog choco(2, 2.2, "choco");
//	Dog coco;
//	//coco.age = 1;
//	coco.setAge(1);
//	coco.setWeight(2.5);
//	coco.setName("코코");
//	std::cout << "코코의 이름은 : " << coco.getName() << "\ncoco의 나이는 : " << coco.getAge() << "\ncoco의 몸무게는 : " << coco.getWeight() << std::endl;
//
//	return 0;
//}