int SimpleFunc(int a = 10) {
	return a + 1;
}

int SimpleFunc(void) { //매개변수가 없는 함수를 호출할 때 위에 함수와 오버로딩 되지 않고, 혼동될 수 있다.
	return 10;
}