#include <iostream>
#include<iomanip>


//함수 접기 컨트롤 M + O
//함수 펴기 컨트롤 M + L

//함수 선언
int exercise1();
int exercise2();
int exercise2_1();
int exercise3();
int exercise4();
int exercise5();
int exercise6(int num);
int add(int x, int y);
char vending(int x);
const char* vending1(int x);



int main() {
	std::cout << "메인 시작" << std::endl;
	//함수호출
	//num1에 함수결과값을 넣고 호출
	int num1 = exercise6(5);
	std::cout << num1;

	int sum = add(2, 3);
	std::cout << sum;

	int answer = vending(1);
	std::cout << answer;


	// 반환된 주소를 포인터 변수에 저장
	const char* drink = vending1(1);

	// 출력: std::cout은 char*를 만나면 널 문자(\0)까지 전체 문자를 읽어서 출력함
	std::cout << "선택 결과: " << drink << std::endl;

	return 0;
}

//함수정의
int exercise1() {
	int score;
	printf("당신의 점수를 입력하고 Enter를 누르세요=");
	scanf_s("%d", &score);

	if (score < 60) printf("60점 미만이므로 재수강해야 합니다.\n");
	//if문 4가지 방법으로 만들어보기

	return 0;
}

int exercise2() {
	int value;
	std::cout << "1~3까지의 수를 입력하세요:" << std::endl;
	std::cin >> value;

	if (value == 1) std::cout << "1을 입력하셨습니다.\n";
	else if (value == 2) std::cout << "2를 입력하셨습니다.\n";
	else if (value == 3) std::cout << "3을 입력하셨습니다.\n";
	else std::cout << "잘못 입력하셨습니다.\n";

	return 0;
}

int exercise2_1() {
	int value;
	std::cout << "1~3까지의 수를 입력하세요:" << std::endl;
	std::cin >> value;

	switch (value) {
		case (1):
			std::cout << "1을 입력하셨습니다.\n";
			break;
		case (2):
			std::cout << "1을 입력하셨습니다.\n";
			break;
		case (3):
			std::cout << "1을 입력하셨습니다.\n";
			break;
		default:
			std::cout << "잘못 입력하셨습니다.\n";
			break;
	}

	return 0;
}

int exercise3() {
	for (int i = 1; i <= 10; i++) {
		std::cout << i << "번째 안녕?\n";
		//#include<iomanip>가 필요함
		//std::setw(4) 4칸을 차지해라
		//std::setfill('0') 빈칸은 0으로 채워라
	}

	return 0;
}

int exercise4() {
	for (int i = 0; i <= 10; i++) {
		std::cout << std::setw(2) << i + 1 << "번 : Reo";
	}

	for (int i = 0; i <= 10; i++) {
		//위와 같은방식임
		std::cout.width(2);
		std::cout << i + 1 << "번 : Reo";
	}

	return 0;
}

int exercise5() {
	//무한루프 도는 경우

	//1번
	for (;;) {
		std::cout << "Hi";
	}

	//2번

	while (1) {
		std::cout << "Hi";

	}

	//3번
	do {
		std::cout << "Hi";

	} while (1);

	return 0;

}

int exercise6(int num) {
	//파라미터 num을 받아서 2배로 리턴하는 함수
	return num * 2;

}

int add(int x, int y) {
	return x + y;
}

char vending(int x)
{
	if (x == 1) return 'A';
	else return 'B';
}

// [방법 1] C 스타일: 문자 포인터(const char*) 반환 함수
// -------------------------------------------------------------
// 특징:
// 1. "콜라", "사이다"는 바이너리의 읽기 전용 데이터 영역(Read-Only Data)에 저장됩니다.
// 2. 이 함수는 문자열 데이터 자체를 넘기는 것이 아니라, 그 글자들이 위치한 '시작 주소'만 반환합니다.
// 3. 읽기 전용 메모리 주소이므로 반환 타입에 반드시 'const'를 붙여 데이터 수정을 원천 차단합니다.
const char* vending1(int x) {
	if (x == 1) {
		return "콜라";    // 읽기 전용 영역에 저장된 "콜라"의 첫 문자 주소 반환
	}
	else {
		return "사이다";  // 읽기 전용 영역에 저장된 "사이다"의 첫 문자 주소 반환
	}
}

// -------------------------------------------------------------
// [방법 2] C++ 스타일: 문자열 객체(std::string) 반환 함수
// -------------------------------------------------------------
// 특징:
// 1. "콜라"라는 문자열 리터럴을 기반으로 std::string 클래스의 '새로운 객체'를 생성합니다.
// 2. 호출한 쪽에서는 완성된 독립적인 문자열 객체를 복사/이동 받습니다.
// 3. 객체이므로 문자열 이어붙이기(+), 길이 조회, 문자 치환 등 다양한 조작이 자유롭습니다.
std::string vending2(int x) {
	if (x == 1) {
		return "콜라";    // std::string 임시 객체가 생성되어 호출자에게 전달됨
	}
	else {
		return "사이다";  // std::string 임시 객체가 생성되어 호출자에게 전달됨
	}
}