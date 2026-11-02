#include <iostream>

// 다른 파일에 만들어둔 함수가 존재한다고 컴파일러에 미리 선언 (함수 원형)
int main1();
int main2();
int main3();
int main4();
int main5();
int main6();
int main7();
int main8();
int main9();
int main10();

int main() {
	// 오늘 돌려보고 싶은 실습 함수만 골라서 호출
	// main1(); // 1번을 돌리고 싶으면 주석 해제
	main1();    // 2번 실행
	main3();
	main4();
	main5();
	main8();
	main10();

	return 0; // 정상 종료
}