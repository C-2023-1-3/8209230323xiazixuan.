#include"student.h"           //��Ҫ©д���У��������ͨ����
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
    cout << "name��" << name << endl;
    cout << "sex��" << sec << endl;
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