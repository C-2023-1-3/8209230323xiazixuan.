#include<iostream>
using namespace std;
int main() {
	char a;
	cout << "请输入一个英文字母" << endl;
	cin >> a;
	if (a >= 'a' && a <= 'z') {
		a -= 32;
		cout <<"它的大写字母为"<< a << endl;
	}
	else if (a >= 'A' && a <= 'Z') {
		a += 1;
		cout << "其后继字符的ASCII码值为"<<(int)a << endl;
	}
	else {
		cout << "您的输入不合法" << endl;
	}
	return 0;
}