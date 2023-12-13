#include<iostream>
using namespace std;
/*(3)主程序中建立一动态数组（使用new），
数组元素及元素个数由键盘输入，
动态调试观察指针及指针指向的内容；设计一个函数对数组由小到大排序；
主程序中用指针方式输出数组元素；最后释放数组内存（delete）。*/
void sort(int**pa,int n) {
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < n-1; j++)
			if ((*pa)[j] > (*pa)[j+1])
			{
				int t = (*pa)[j ];
				(*pa)[j ] = (*pa)[j+1];
				(*pa)[j+1] = t;
				changed = true;
			}
	} while (changed);
	
}
int main()
{
	int n;
	cout << "请输入元素个数";
	cin >> n;
	cout << "请输入元素";
	int* list = new int[n];
	for (int i = 0; i < n; i++)
		cin >> list[i];
	int** pa = &list;
	
	cout <<"第一个元素为："<< * *pa << endl;
	cout << "你想查询第几个元素：";
	int m;
	cin >> m;
	if (m <= n)
		cout << (*pa)[m - 1] << endl;
	else
		cout << "您定义的数组里没有这么多元素" << endl;
	sort(pa,n);
	cout << "元素从小到大排序为：";
	for (int i = 0; i < n; i++)
		cout << (*pa)[i]<< " ";
	delete[]list;
	return 0;
}