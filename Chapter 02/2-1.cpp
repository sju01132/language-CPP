#include<iostream>

int main(void) {
	const int num = 12;
	const int* p = &num;
	const int* (&ref) = p;

	std::cout << "포인터를 사용해서 출력: " << *p << std::endl;
	std::cout << "참조자를 사용해서 출력: " << *ref << std::endl;

	return 0;
}