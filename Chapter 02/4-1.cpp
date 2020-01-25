#include<iostream>
#include<cstring>

using namespace std;

int main(void) {
	char str1[20] = "아무문자 777";
	char str2[20]= "제발 왜 안됨?";
	char str3[50];

	cout << strlen(str1) << endl;

	strcpy(str3, str1);
	strcat(str3, str2);

	cout << str3 << endl;

	if (strcmp(str1, str2) != 0)
		cout << "문자열이 같지 않습니다" << endl;
	else
		cout << "같습니다" << endl;

	return 0;
}