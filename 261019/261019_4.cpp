//#define IN 1;
//#include <iostream>
//
//int main(void) {
//	const int x = 2.5; //변수 x는 항상 2, 변경불가, 초깃값 지정해야함.
//	int  const y = 3; //비추, const는 자료형 앞에 씀
//	const int z{ 4 }; //Uniform initialization, C++11, z{}
//	constexpr int a = 5.3; // C++11부터 가능, complie-time constant
//	x = 3; //변경불가
//	a = 3; //변경불가
//
//	std::cout << IN << x << y << z << a;
//}