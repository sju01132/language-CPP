#include<iostream>
#include<cstring>

using namespace std;

int main(void) {
	char str1[20] = "�ƹ����� 777";
	char str2[20]= "���� �� �ȵ�?";
	char str3[50];

	cout << strlen(str1) << endl;

	strcpy(str3, str1);
	strcat(str3, str2);

	cout << str3 << endl;

	if (strcmp(str1, str2) != 0)
		cout << "���ڿ��� ���� �ʽ��ϴ�" << endl;
	else
		cout << "�����ϴ�" << endl;

	return 0;
}