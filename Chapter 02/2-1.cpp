#include<iostream>

int main(void) {
	const int num = 12;
	const int* p = &num;
	const int* (&ref) = p;

	std::cout << "�����͸� ����ؼ� ���: " << *p << std::endl;
	std::cout << "�����ڸ� ����ؼ� ���: " << *ref << std::endl;

	return 0;
}