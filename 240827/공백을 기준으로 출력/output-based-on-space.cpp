#include <iostream>
using namespace std;

int main() {
    string str1, str2,result ="";
getline(cin, str1);
getline(cin, str2);

for (int i = 0; i < str1.size(); i++) 
{
	if (str1[i] != ' ') result += str1[i];
}
for (int i = 0; i < str2.size(); i++)
{
	if (str2[i] != ' ') result += str2[i];
}

cout << result;


    return 0;
}