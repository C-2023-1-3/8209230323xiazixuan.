#include<iostream>
using namespace std;
int main() {
	double one = 0.8,ave;
	int num = 2, sum = 2,i=1;
	for (; sum < 100;i++) {
		num *= 2;
		sum = sum + num;
	}
	cout << "总共买了" << sum << "个苹果" << endl;
	cout << "总共花了" << i << "天" << endl;
	ave = sum * one / i;
	cout <<"平均每一天花的钱为"<< ave <<"元" << endl;
	return 0;
}
