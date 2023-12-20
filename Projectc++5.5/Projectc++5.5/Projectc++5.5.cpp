#include<iostream>
using namespace std;
class Point {
private:
	int x;
	int y;
public:
	Point(int x_, int y_)
	{
		x = x_;
		y = y_;
	}
	void setPoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << "x=" << x << " y=" << y << endl;
	}
};
int main()
{
	Point point1(60, 80);
	point1.setPoint(9, 8);
	point1.display();
	return 0;
}
