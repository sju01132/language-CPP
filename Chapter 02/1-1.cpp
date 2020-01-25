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
	cout << "정수를 입력하세요\n";
	cin >> num;
	cout << "현재 변수 num: " << num<<endl;
	
	plusnum(num);
	cout << "1증가: " <<num<<endl;
	changesign(num);
	cout << "부호 변경: " << num<<endl;
	return 0;
}