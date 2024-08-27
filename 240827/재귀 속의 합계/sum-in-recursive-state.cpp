#include <iostream>
#include <string>
using namespace std;


int Pactorial(int n)
{
	if (n <= 1) return 1;
	else return n + Pactorial(n - 1);
}
int main()
{
	int n;
	cin >> n;
	n = Pactorial(n);
	cout << n;
	return 0;
}