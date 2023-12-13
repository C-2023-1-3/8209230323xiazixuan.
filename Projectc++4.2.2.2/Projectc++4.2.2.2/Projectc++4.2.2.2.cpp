#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int parseHex(const char* const hexString)
{
	int result = 0;
	int n = strlen(hexString); 
	int* list = new int[n];
	for (int i = 0; i < n; i++)
		list[i] = 0;
	for (int i = 0; i<n; i++)
	{
		if (hexString[i] >= 'A' && hexString[i] <= 'F')
			list[i] = hexString[i] - 'A' + 10;
		else if(hexString[i] >= '0' && hexString[i] <= '9')
			list[i] = hexString[i] - '0';
		else if (hexString[i] >= 'a' && hexString[i] <= 'f')
			list[i] = hexString[i] - 'a' + 10;
	}
	for (int i = 0; i < n; i++)
		result +=list[i]* pow(16, n -1 - i);
	delete[]list;
	return result;
}
int main()
{
	string a;
	cout << "请输入一个十六进制的数字";
	cin >> a;
	const char* hexString = a.c_str();
	cout<<"它的十进制为： "<<parseHex(hexString);
	return 0;
}