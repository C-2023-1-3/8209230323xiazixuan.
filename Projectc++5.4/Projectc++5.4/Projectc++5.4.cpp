#include<iostream>
using namespace std;
class Score {
private:
	int number;
	int score;
public:
	Score(int number_, int score_)
	{
		number = number_;
		score = score_;
	}
	void max(Score*cp)
	{
		int t = cp[1].score;
		for (int i = 1; i < 5; i++)
			t = t >= cp[i].score ? t: cp[i].score;
		for (int i = 0; i < 5; i++)
			if (cp[i].score == t)cout << cp[i].number << endl;
	}
};
int main()
{
	Score Classstudent[5] =
	{
	Score(200220,80),
	Score(200222,82),
	Score(200201, 98),
	Score(200245,97),
	Score(200203,78)
	};
	Classstudent->max(Classstudent);
	return 0;
}