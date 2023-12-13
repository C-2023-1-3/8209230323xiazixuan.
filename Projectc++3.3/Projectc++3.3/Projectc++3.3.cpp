#include<iostream>
using namespace std;
#include"mytriangle.h"
int main()
{
	double side1, side2, side3;
	cout << "请输入三角形三边长" << endl;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3))
		cout<<"面积为"<<area(side1, side2, side3);
	return 0;

}