#include <iostream>
#include <string>
using namespace std;

int main()
{
	string num;
	int result = 0;
	cin >> num;

	for (int i = 0; i < num.size(); i++)
	{
		result += num[i] - '0';
	}

	cout << result;

	return 0;
}