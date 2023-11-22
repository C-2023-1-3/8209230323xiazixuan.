#include<iostream>
using namespace std;
int main() {
	int x, y,z;
	char op;
	cout << "请输入第一个数字" << endl;
	cin >> x;
	cout << "请输入你想要做的运算" << endl;
	cin >> op;
	cout << "请输入第二个数字" << endl;
	cin >> y;
	switch (op)
	{
	case'+': 
	{z = x + y; 
	cout << "您运算的结果为" << z << endl; break; }
	case'-': 
	{z = x - y; 
	cout << "您运算的结果为" << z << endl; break; }
	case'*':
	{z = x * y; 
	cout << "您运算的结果为" << z << endl; break; }
	case'/':{
		if (y == 0) 
		{
			cout << "除数不能为零" << endl; ;
		}
		else {
			z = x / y;
			cout << "您运算的结果为" << z << endl;
		}
		break;
	     
	}
	case'%': {
		if (y == 0) 
	{ cout << "除数不能为零" << endl; }
	else {
		z = x % y;
		cout << "您运算的结果为" << z << endl;
	     }
		break;
	}

	default:cout << "您的输入不合法" << endl;
		break;
	}
	return 0;
		
}