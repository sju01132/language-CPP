#include<iostream>

int main(void) {
	char name[20], number[12];

	std::cout << "�̸�: ";
	std::cin >> name;
	std::cout << "��ȭ��ȣ: ";
	std::cin >> number;

	std::cout << "�̸�: " << name << " ��ȭ��ȣ: " << number << std::endl;

	return 0;
}