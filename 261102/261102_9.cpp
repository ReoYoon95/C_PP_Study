#include <iostream>
namespace {
	class Dog {
	private:
		int age; // 나이를 저장하는 멤버 변수

	public:
		// 생성자 선언: 디폴트 인자(= 1)는 선언부에만 작성
		Dog(int a = 1);

		// 소멸자 선언
		~Dog();

		// getter 함수 선언
		int getAge();

		// setter 함수 선언
		void setAge(int a);
	};
}

// 1. 생성자 정의 (클래스 밖) -> 여기에 = 1을 또 적으면 컴파일 에러!
Dog::Dog(int a) {
	age = a;
}

// 2. 소멸자 정의 (클래스 밖)
Dog::~Dog() {
	std::cout << "소멸\n";
}

// 3. getAge 정의 (클래스 밖)
int Dog::getAge() {
	return age;
}

// 4. setAge 정의 (클래스 밖)
void Dog::setAge(int a) {
	age = a;
}

int main9() {
	// meri는 인자가 없으므로 디폴트값 1 적용, happy는 인자 5 적용
	Dog meri, happy(5);

	// 나이 출력
	std::cout << happy.getAge() << "," << meri.getAge() << std::endl;

	return 0; // 프로그램 종료 (소멸자 2번 호출)
}