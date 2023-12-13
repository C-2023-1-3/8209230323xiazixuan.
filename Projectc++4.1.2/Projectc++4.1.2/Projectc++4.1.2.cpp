#include<iostream>
using namespace std;
int main()
{
	double list[10] = {};
	cout << "Input ten numbers:  " << endl;
	for (int i = 0; i <= 9; i++)
	{
		cin >> list[i];
	}
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < 9; j++)
			if (list[j] > list[j + 1])
			{
				double t;
				t = list[j];
				list[j] = list[j + 1];
				list[j + 1] = t;
				changed = true;
			}
	} while (changed);
	for (int i = 0; i <= 9; i++)
		cout << list[i] << " ";
	return 0;
}