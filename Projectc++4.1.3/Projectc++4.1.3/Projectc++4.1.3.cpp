#include<iostream>
using namespace std;
int main()
{
	int student[100]{};
	bool cabnit[100]{};
	for (int i = 0; i <= 99; i++)
		student[i] = i + 1;
	for (int i = 0; i <= 99; i++)
		cabnit[i] = true;
	for (int i = 2; i <= 100; i++)
	{
		for (int j = i; j <= 100; j++)
			if (j == i || (j - i) % i == 0)
			{
				if (cabnit[j - 1] ) {
					cabnit[j - 1] = false;
					continue;
				}
				else {
					cabnit[j - 1] = true;
					continue;
				}
			}
	}
	for (int i = 1; i <= 100; i++)
		if (cabnit[i - 1])
			cout << i << " ";
	return 0;
}
