#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int sum(int a[], int n)
{
	int ans = 0;
	if (n > 1)
		ans = a[n - 1] + sum(a, n - 1);
	if (n == 1)
		return a[0];
	return ans;
}

int main()
{
	int i, a[10];
	srand(unsigned(time(NULL)));
	for (i = 0; i < 10; i++)
	{
		a[i] = rand() % 90 + 10;
	}
	for (i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	cout <<"Sum = "<< sum(a, 10);
	system("pause");
	return 0;
}