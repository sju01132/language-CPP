#include<iostream>

int main(void) {
	while (1) {
		int sales;
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		std::cin >> sales;

		if (sales == -1){
			std::cout << "���α׷��� �����մϴ�" << std::endl;
			break;
		}
		std::cout << "�̹� �� �޿�: " << 50 + sales * 0.12 << std::endl;
	}
	return 0;
}