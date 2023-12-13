#include<iostream>
using namespace std;
int f(int n)
{
	if (n == 10)return 1;
	else {
		return (f(n + 1) + 1) * 2;
	}
}
int main()
{
	cout << f(1);
	return 0;
}
