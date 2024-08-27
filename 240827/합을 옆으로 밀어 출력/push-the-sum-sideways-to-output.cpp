#include <iostream>
#include <string>
using namespace std;

int main()
{
	string num,result = "";
	int n,nums,total = 0;
	char c;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		nums = 0;
		for (int j = 0; j < num.size(); j++)
		{
			nums = nums * 10 + num[j] - '0';
		}
			total += nums;
	}

	result += to_string(total);
	c = result[0];
	for (int i = 0; i < result.size() - 1; i++)
	{
		result[i] = result[i + 1];
	}

	result[result.size() - 1] = c;

	cout << result;

	return 0;
}