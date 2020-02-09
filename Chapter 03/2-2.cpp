#include<iostream>
#include<cstring>
using namespace std;

class Printer {
	char str[200];
	
	public:

		void SetString(const char *s) {
			strcpy(str, s);
		}

		void ShowString() {
			cout << str << endl;
		}
};


int main(void)
{
	Printer pnt;
	pnt.SetString("Hello World!");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();

	return 0;
}