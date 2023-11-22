#include<iostream>
using namespace std;
#define PI 3.14
int main() {
	double v, r, h;
	cout << "请输入圆锥的底面半径和锥高" << endl;
	cin >> r >> h;
	v = PI * r * r * h/3;
	cout << "圆锥的体积为" << v << endl;
	return 0;
}