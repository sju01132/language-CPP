#include<iostream>

int main(void) {
	char name[20], number[12];

	std::cout << "이름: ";
	std::cin >> name;
	std::cout << "전화번호: ";
	std::cin >> number;

	std::cout << "이름: " << name << " 전화번호: " << number << std::endl;

	return 0;
}