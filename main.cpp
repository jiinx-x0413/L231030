#include <iostream>
using namespace std;

#define X 9
#define Y 9

//int Array[Y][X] = { {0, }, };

int Array[9][9] = {
	{1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 0, 0, 0, 1, 0, 0, 0, 1},
	{1, 0, 0, 0, 1, 0, 0, 0, 1},
	{1, 0, 0, 0, 1, 0, 0, 0, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 0, 0, 0, 1, 0, 0, 0, 1},
	{1, 0, 0, 0, 1, 0, 0, 0, 1},
	{1, 0, 0, 0, 1, 0, 0, 0, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1}
};

/*
void GetArray(int FirstValue, int SecondValue, bool Print)
{
	for (int i = 0; i < Y; i++)
	{
		for (int j = 0; j < X; j++)
		{
			if (i == 0 || i == 4 || i == Y - 1 || j == 0 || j == 4 || j == X - 1)
			{
				Array[i][j] = FirstValue;

			}
			else
			{
				Array[i][j] = SecondValue;

			}

			if (Print == true)
			{
				cout << Array[i][j];
			}
		}
		if (Print == true)
		{
			cout << endl;
		}

	}
};
*/

void ChangeArray()
{
	for (int i = 0; i < Y; i++)
	{
		for (int j = 0; j < Y; j++)
		{
			if (Array[i][j] == 1)
			{
				Array[i][j] = 0;
			}
			else
			{
				Array[i][j] = 1;
			}
			cout << Array[i][j];
		}
		cout << endl;
	}
}

int main()
{
	// 입력
	//GetArray(1, 0, false);

	// 변경
	//GetArray(0, 1, true);
	ChangeArray();


	return 0;
}