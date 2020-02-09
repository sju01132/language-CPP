#include<iostream>
// °¡¶ó ÄÚµå
using namespace std;

int a,b,c,d;

class Calculator
{
private:
	double x, y;

public:

	double Add(double x, double y);
	double Min(double x, double y);
	double Div(double x, double y);
	void Init();
	void ShowOpCount();

};


int main(void) {

	Calculator cal;
	cal.Init();
	cout << "3.2 + 2.4 =" << cal.Add(3.2, 2.4) << endl;
	cout << "3.5 / 1.7 =" << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 - 1.5 =" << cal.Min(2.2, 1.5) << endl;
	cout << "4.9 / 1.2 =" << cal.Div(4.9, 1.2) << endl;
	cal.ShowOpCount();
	return 0;
}

inline double Calculator::Add(double x, double y) {
	int &z = a;
	z++;
	return x + y;
}

inline double Calculator::Min(double x, double y) {
	int& z = b;
	z++;
	return x - y;
}

inline double Calculator::Div(double x, double y) {
	int& z = d;
	z++;
	return x / y;
}

inline void Calculator::Init() {
	a = 0;
	b = 0;
	c = 0;
	d = 0;
}

inline void Calculator::ShowOpCount() {
	cout << "µ¡¼À: " << a << " »¬¼À: " << b << " °ö¼À: " << c << " ³ª´°¼À: " << d << endl;

}