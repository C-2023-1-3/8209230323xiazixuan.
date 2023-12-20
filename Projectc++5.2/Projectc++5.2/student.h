
using namespace std;
#include <iostream>
#include <string>
class Student            
{
public:                  
	void display();
	Student();
	Student(int num, const char name[], char sec);
	
private:
	int num;
	char name[20];
	char sec;
};



