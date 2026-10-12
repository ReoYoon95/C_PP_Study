#include <iostream> // 표준 입출력 스트림(std::cout, std::endl) 사용을 위한 헤더 포함
#include <string>   // std::string 문자열 클래스를 안전하게 다루기 위한 헤더 포함

// Dog 클래스 정의 시작
class Dog {
	// 접근 제어 지시자를 쓰지 않으면 class 내부 멤버는 기본적으로 private(비공개) 상태입니다.
	int age;          // 강아지 나이 (정수형)
	double weight;    // 강아지 몸무게 (실수형)
	std::string name; // 강아지 이름 (문자열)

public: // 외부에서 호출 가능한 공개(public) 영역 시작

	// [Getter] 이름 조회: 멤버 변수 name의 값을 반환
	std::string getName() {
		return name;
	}

	// [Setter] 이름 수정: 매개변수 n으로 전달받은 값을 멤버 변수 name에 저장
	void setName(std::string n) {
		name = n;
	}

	// [Getter] 몸무게 조회: 멤버 변수 weight의 값을 반환
	double getWeight() {
		return weight;
	}

	// [Setter] 몸무게 수정: 매개변수 w로 전달받은 값을 멤버 변수 weight에 저장
	void setWeight(double w) {
		weight = w;
	}

	// [Setter] 나이 수정: 매개변수 a로 전달받은 값을 멤버 변수 age에 저장
	void setAge(int a) {
		age = a;
	}

	// [Getter] 나이 조회: 멤버 변수 age의 값을 반환
	int getAge() {
		return age;
	}

	// [멤버 함수] 짖기 동작: 화면에 "멍멍"을 출력
	void bark() {
		std::cout << "멍멍\n";
	}

	// [매개변수 생성자] 
	// 객체가 만들어질 때 a, w, n을 전달받아 중괄호 유니폼 초기화 리스트(:)로 멤버 변수에 즉시 대입
	Dog(int a, double w, std::string n) : age{ a }, weight{ w }, name{ n } {}

	// [소멸자]
	// 객체가 스코프(함수 블록)를 벗어나 메모리에서 사라질 때 자동으로 단 한 번 호출됨
	~Dog() {
		std::cout << "bye~\n";
	}
}; // 클래스 정의 끝 (세미콜론 필수)

// 프로그램 진입점 (실제 실행하려면 main으로 변경해야 함)
int main(void) {
	// 1. 매개변수 생성자를 호출하여 choco 객체 생성 (age=1, weight=1.2, name="choco")
	Dog choco(1, 1.2, "choco");

	// 2. 매개변수 생성자를 호출하여 coco 객체 생성 (age=2, weight=2.2, name="coco")
	Dog coco(2, 2.2, "coco");

	// 생성자를 통해 이미 초기값이 세팅되었으므로 아래 setter 호출 코드는 불필요하여 주석 처리됨
	//coco.setName("coco");
	//choco.setName("choco");
	//coco.setAge(1);
	//choco.setAge(2);
	//coco.setWeight(1.2);
	//choco.setWeight(2.2);

	// coco 객체의 정보 출력 및 짖기 실행
	std::cout << "이름: " << coco.getName() << " 나이 : " << coco.getAge() << " 몸무게 : " << coco.getWeight() << std::endl;
	coco.bark();

	// choco 객체의 정보 출력 및 짖기 실행
	std::cout << "이름: " << choco.getName() << " 나이 : " << choco.getAge() << " 몸무게 : " << choco.getWeight() << std::endl;
	choco.bark();

	return 0;
	// main 함수가 끝나는 순간 스택에 있던 coco와 choco 객체가