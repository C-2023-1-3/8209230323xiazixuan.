#include"student.h"           //不要漏写此行，否则编译通不过
void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sec << endl;
}
Student::Student()
{
	num = 0;
	strcpy_s(name, "***");
	sec = '*';
}
Student::Student(int num, const char name[], char sec)
{
	this->num = num;
	strcpy_s(this->name, name);
	this->sec = sec;
}