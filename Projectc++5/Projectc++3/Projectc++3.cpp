#include<iostream>;
#include <iomanip>
using namespace std;
int main() {
	float f, c;
	cout << "请输入华氏温度" << endl;
	cin >> f;
	c = 5 * (f - 32) / 9;
	cout << "将其转化为摄氏温度为" <<fixed<<setprecision(2)<<c << endl;
	return 0;
}

