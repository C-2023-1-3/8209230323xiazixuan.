#include<iostream>
using namespace std;
int GCD(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int LCM(int a, int b) {
	return a * b / GCD(a, b);
}
int main() {
	int a, b;
	cout << "请输入两个正整数" << endl;
	cin >> a >> b;
	cout << "它们的最大公约数为" << GCD(a, b) << endl;;
	cout << "它们的最小公倍数为" << LCM(a, b) << endl;
	return 0;
}