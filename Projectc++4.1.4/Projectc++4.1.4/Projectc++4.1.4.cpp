#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	for (int i = 0; i < size1; i++)
		list3[i] = list1[i];
	for (int i = 0; i < size2; i++)
		list3[i + size1] = list2[i];
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < size1+size2-1; j++)
			if (list3[j] > list3[j + 1])
			{
				int t;
				t = list3[j];
				list3[j] = list3[j + 1];
				list3[j + 1] = t;
				changed = true;
			}
	} while (changed);
}
int main()
{
	const int Max = 80;
	int m, n;
	cout << "Enter list1: ";
	cin >> m;
	int* list1 = new int[m];
	for (int i = 0; i < m; i++)
		cin >> list1[i];
	cout << endl;
	cout << "Enter list2: ";
	cin >> n;
int* list2 = new int[n];
	for (int i = 0; i < n; i++)
		cin >> list2[i];
	cout << endl;
	cout << "The merged list is ";
	int* list3 = new int[m + n];
	merge(list1, m, list2, n, list3);
	for (int i = 0; i < m + n; i++)
	{
		cout << list3[i] << " ";
	}
	delete[]list1;
	delete[]list2;
	delete[]list3;
	return 0;
}