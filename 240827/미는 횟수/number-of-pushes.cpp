#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1,str2;
	int cnt = 0;

	getline(cin,str1);
	getline(cin,str2);

	while (str1 != str2)
	{
			char c = str1[str1.size() - 1];
			for (int i = str1.size() - 1; i > 0; i--)
		{
			str1[i] = str1[i - 1];
		}
			str1[0] = c;
			cout << str1 << endl;
			cnt++;

			if (cnt > 100)
			{
				cnt = -1;
				break;
			}
	}
	
	cout << cnt;

	return 0;
}