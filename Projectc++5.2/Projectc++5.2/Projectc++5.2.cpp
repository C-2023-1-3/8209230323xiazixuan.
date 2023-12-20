#include "student.h"
int main()
{
	Student stud;                //定义对象
	Student stud1(7, "tcg", 'm');
	stud.display();     //执行stud对象的display函数
	stud1.display();
	return 0;
}
