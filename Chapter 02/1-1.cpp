#include<iostream>

using namespace std;

void plusnum(int &n) {
	 n = n + 1;
}
void changesign(int& n) {
	n = -n;
}

int main(void) {
	int num;
	cout << "������ �Է��ϼ���\n";
	cin >> num;
	cout << "���� ���� num: " << num<<endl;
	
	plusnum(num);
	cout << "1����: " <<num<<endl;
	changesign(num);
	cout << "��ȣ ����: " << num<<endl;
	return 0;
}