#include "iostream"
using namespace std;
int main()
{
	int a, n, i, temp=0, result=0;
	a = (rand() % 9) + 1;
	n = (rand() % 5) + 1;
	for (i = 1; i <= n; i++)
	{
		temp = temp * 10 + a;
		result += temp;
	}
	cout << "a=" << a << ",n=" << n << endl;
	cout << "Sn=" << result << endl;
	system("pause");
	return 0;
}