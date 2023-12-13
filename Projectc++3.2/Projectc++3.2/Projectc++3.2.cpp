#include<iostream>
#include<cmath>
using namespace std;
bool is_prime(int num)
{
	if (num == 1 || num == 2) { return true; }
	else
	{
		for (int i = 2; i <num; i++)
		{
			if (num % i == 0)
			{
				return false;
			}
			
		}
		return true;
	}
}

int main()
{
	int  n = 0;
	for (int i=2; i >=0; i++)
	{
		if (is_prime(i))
		{
			cout << i << "\t";
			n++;
			if (n % 10 == 0)cout << endl;
			if (n == 200)break;
		}
	}
	return 0;
}