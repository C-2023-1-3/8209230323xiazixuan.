#include<iostream>
using namespace std;

int gcd(int &a,int& b)
{
	int t=0;
	while (b != 0) {
        t = b;
		b = a % b;
		a = t;
	}
	return a;

}

int main()
{
	int m, n, x, y;
	cout << "请输入两个自然数" << endl;
	cin >> m >> n;
	x = m, y = n;
	cout<<"最大公约数为  " << gcd(m, n) << endl;
	cout << "最小公倍数为 " << x * y / m << endl;
	return 0;
}