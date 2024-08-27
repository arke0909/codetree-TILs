#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성string num;
int result = 0;
cin >> num;

for (int i = 0; i < num.size(); i++)
{
	result += num[i] - '0';
}

cout << result;해주세요.
    return 0;
}