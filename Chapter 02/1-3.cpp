#include<iostream>
using namespace std;

void SwapPointer(int *(&p),int *(&q)) {
	int *n;
	n = p;
	p = q;
	q = n;
}


int main(void) {
	int num1 = 5;
	int* ptr1 = &num1;
	int num2 = 10;
	int* ptr2 = &num2;

	SwapPointer(ptr1, ptr2);

	cout << "ptr1: " << *ptr1 << " ptr2: " << *ptr2 << endl;

	return 0;
}