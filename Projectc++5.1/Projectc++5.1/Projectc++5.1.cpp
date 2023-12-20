#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void Settime()
	{
		cin >> hour >> minute >> sec;
		this->hour = (hour >= 0 && hour < 24) ? hour : 0;
		this->minute = (minute>=0&&minute<60)?minute:0;
		this->sec = (sec>=0&&sec<60)?sec:0;
	}
	void Showtime()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;
	t1.Settime();
	t1.Showtime();
	return 0;
}
