#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num1 = 0,num2 = 0,result = 0;
	string str1, str2,strRes1 = "", strRes2 = "";
	getline(cin, str1);
	getline(cin, str2);

	for (int i = 0; i < str1.size(); i++)
	{
		if (str1[i] >= '0' && str1[i] <= '9') num1 = num1 * 10 +  str1[i] - '0';
	}
	for (int i = 0; i < str2.size(); i++)
	{
		if (str2[i] >= '0' && str2[i] <= '9') num2 = num2 * 10 + str2[i] - '0';
	}

	cout << num1 + num2;

	return 0;
}