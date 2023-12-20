#include<iostream>
using namespace std;
class cuboid {
private:
	int length, height, width,volumn;
public:
	void Enter()
	{
		cout << "请输入长方柱的长宽高";
		cin >> length >> width >> height;
	}
	int Calcuelate()
	{
		volumn=length * height * width;
		return volumn;
	}
	void Volumn()
	{
		cout << "体积为 " << volumn;
	}
};
int main()
{
	cuboid cub1;
	cub1.Enter();
	cub1.Calcuelate();
	cub1.Volumn();
	return 0;
}