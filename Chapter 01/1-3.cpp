#include<iostream>

int main(void) {
	int num;

	std::cout << "숫자 입력: ";
	std::cin >> num;

	std::cout << num << "*" << 1 << "-" << num * 1 << std::endl;
	std::cout << num << "*" << 2 << "-" << num * 2 << std::endl;
	std::cout << num << "*" << 3 << "-" << num * 3 << std::endl;
	std::cout << num << "*" << 4 << "-" << num * 4 << std::endl;
	std::cout << num << "*" << 5 << "-" << num * 5 << std::endl;
	std::cout << num << "*" << 6 << "-" << num * 6 << std::endl;
	std::cout << num << "*" << 7 << "-" << num * 7 << std::endl;
	std::cout << num << "*" << 8 << "-" << num * 8 << std::endl;
	std::cout << num << "*" << 9 << "-" << num * 9 << std::endl;

	return 0;
}