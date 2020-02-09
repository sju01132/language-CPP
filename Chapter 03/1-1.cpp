#include<iostream>
using namespace std;

struct Point
{
	int xpos, ypos;

	void ShowPosition() {
		cout << "[" << xpos << "," << ypos << "]" << endl;
	}

	void Movepos(int x, int y) {
		xpos += x;
		ypos += y;
	}

	void AddPoint(const Point $pos) {
		xpos += $pos.xpos;
		ypos += $pos.ypos;
	}

};

int main(void) {
	Point pos1 = { 12,4 };
	Point pos2 = { 20,30 };

	pos1.Movepos(-7, 10);
	pos1.ShowPosition(); //5, 14 ���

	pos1.AddPoint(pos2);
	pos1.ShowPosition();// 25,44 ���

	return 0;
}


