#include <iostream>
using namespace std;

int main()
{
	int size;
	cin >> size;
	int** arr = new int* [size];
	for (int i = 0; i < size; i++)
		arr[i] = new int[size];

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			int result = 0;

			if (i == 0 || j == 0)
			result = 1;
			else
			result = arr[i - 1][j - 1] + arr[i - 1][j] + arr[i][j - 1];
						
			arr[i][j] = result;
			cout << result << " ";
		}
		cout << endl;
	}

	return 0;
}