#include<iostream>

int main(void) {
	int one, two, three, four, five;

	std::cout << "1��° ���� �Է�: ";
	std::cin >> one;
	std::cout << "2��° ���� �Է�: ";
	std::cin >> two;
	std::cout << "3��° ���� �Է�: ";
	std::cin >> three;
	std::cout << "4��° ���� �Է�: ";
	std::cin >> four;
	std::cout << "5��° ���� �Է�: ";
	std::cin >> five;

	std::cout << "�հ�: " << one + two + three + four + five << std::endl;
	
	return 0;
}