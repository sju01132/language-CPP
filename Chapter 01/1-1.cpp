#include<iostream>

int main(void) {
	int one, two, three, four, five;

	std::cout << "1번째 정수 입력: ";
	std::cin >> one;
	std::cout << "2번째 정수 입력: ";
	std::cin >> two;
	std::cout << "3번째 정수 입력: ";
	std::cin >> three;
	std::cout << "4번째 정수 입력: ";
	std::cin >> four;
	std::cout << "5번째 정수 입력: ";
	std::cin >> five;

	std::cout << "합계: " << one + two + three + four + five << std::endl;
	
	return 0;
}