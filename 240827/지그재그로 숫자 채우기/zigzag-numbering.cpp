#include <iostream>
using namespace std;

int main()
{
	int sizeX, sizeY, cnt = 0, repeatCnt = 0, xx = 0, add = 1;
	cin >> sizeX >> sizeY;
	int** arr = new int* [sizeX];
	for (int i = 0; i < sizeX; i++)
		arr[i] = new int[sizeY];

	while (repeatCnt != sizeY)
	{
		cout << xx << cnt << repeatCnt << endl;
		arr[cnt][repeatCnt] = xx++;
		if (cnt == sizeX - 1 && repeatCnt % 2 == 0 || cnt == 0 && repeatCnt % 2 != 0)
		{
			repeatCnt++;
			add *= -1;
		}
		else
		cnt += add;
	}


	for (int i = 0; i < sizeX; i++)
	{
		for (int j = 0; j < sizeY; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}