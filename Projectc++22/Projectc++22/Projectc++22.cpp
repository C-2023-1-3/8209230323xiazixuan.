#include <iostream>
using namespace std;
int main() {
	float x, y;
	cout << "请输入x的值" << endl;
	cin >> x;
	if (0 < x && x < 1) {
		y = 3 - 2 * x;
		cout << "y的值为" << y << endl;
	}
	else if (1 <= x && x < 5) {
		y = 1 + 1 / (2 * x);
		cout << "y的值为" << y << endl;
	}
	else if (5 <= x && x < 10) {
		y = x * x;
		cout << "y的值为" << y << endl;
	}
	else {
		cout << "您输入的x不在定义域内" << endl;
	}
	return 0;
}
