#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num[10], m, i, j, t;
	srand(unsigned(time(NULL)));
	for (i = 0; i < 10; i++)
	{
		num[i] = rand() % 11 + 1;
	}
	cout << "原数组为：" << endl;
	for(i = 0; i < 10; i++)
	{
		cout << num[i] << " ";
	}
	cout << endl;
	cout << "请输入m：" << endl;
	cin >> m;
	for (i = 0; i < m; i++)
	{
		t = num[9];
		for (j = 9; j > 0; j--)
		{
			
			num[j] = num[j - 1];
		}
		num[0] = t;
	}
	cout << "排序后数组为：" << endl;
	for (i = 0; i < 10; i++)
	{
		cout << num[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}