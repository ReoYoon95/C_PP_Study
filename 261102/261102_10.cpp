#include <iostream>

namespace {
	class Dog {
		int age;
		std::string name;

	public:
		int getAge() const {
			return age;

		}

		void setAge(int a = 1) {
			age = a;
		}

		std::string getName() const {
			return name;
		}

		void setName(std::string n) {
			name = n;
		}

		Dog() :age{ 1 }, name{ "코코" } {

		}

		Dog(int a, std::string n) :age{ a }, name{ n } {

		}

		~Dog() {
			std::cout << "bye" << std::endl;

		}

	};
}

int main10(void) {

	Dog coco(3, "coco"), choco;

	std::cout << "coco의 이름 : " << coco.getName() << "coco의 나이 : " << coco.getAge() << std::endl;
	std::cout << "choco의 이름 : " << choco.getName() << "choco의 나이 : " << choco.getAge() << std::endl;


	return 0;

}