#include<iostream>
using namespace std;
#define PI 3.14
int main() {
	double v, r, h;
	cout << "������Բ׶�ĵ���뾶��׶��" << endl;
	cin >> r >> h;
	v = PI * r * r * h/3;
	cout << "Բ׶�����Ϊ" << v << endl;
	return 0;
}