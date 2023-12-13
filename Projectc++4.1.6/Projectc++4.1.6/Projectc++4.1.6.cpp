#include<iostream>
using namespace std;
void count(const char s[], int counts[])
{
	int n = strlen(s);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (s[i] == 65 + j || s[i] == 97 + j)
				counts[j]++;
		}
		
	}
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0)
			cout << char(97 + i) << ":" << counts[i] << "times" << endl;
	}
}
int main()
{
	const int max=99;
	char* s = new char[max];
	cin.getline(s, max);
	int counts[26];
	for (int i = 0; i < 26; i++)
		counts[i] = 0;
	count(s, counts);
	delete[]s;
	return 0;
}
