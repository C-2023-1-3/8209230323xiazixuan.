#include<iostream>
using namespace std;
int main() {
	double C, a, b, c;
	cout << "请输入三角形的三条边的长度" << endl;
	cin >> a >> b >> c;
	if (a + b <= c || a + c <= b || b + c <= a) {
		cout << "无法构成三角形" << endl;
	}
	else {
		cout << "这可以构成三角形" << endl;
		C = a + b + c;
		cout << "三角形的周长为" << C << endl;
		if (a ==b || b == c || a == c) {
			cout << "这是一个等腰三角形" << endl;
		}
		else {
			cout << "这不是一个等腰三角形" << endl;
		}
	}
	return 0;
}
