#include<iostream>
using namespace std;
int main() {
	 double a, x, temp;
	cout << "请输入一个数字" << endl;
	cin >> a;
	if (a > 0) {
		x = a, temp = a;
		a = (x + temp / x) / 2;
		while (x - a > 10e-6|| a - x > 10e-6) {
			x = a;
			a = (x + temp / x) / 2;
		}
		cout << "它的平方根为" << a << endl;
	}
	else if (a == 0) {
		cout << "它的平方根为0" << endl;
	}
	else {
		cout << "负数不能开平方根" << endl;
	}
	return 0;
}