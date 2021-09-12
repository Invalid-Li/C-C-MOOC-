#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
int main()
{
	int num[10], i, j, sum = 0, min, max;
	double aver;
	srand((unsigned)time(NULL));

	for (i = 0; i <= 9; i++)
	{
		num[i] = rand() % 71 + 30;
		sum += num[i];
	}

	cout << "Element" << setw(13) << "Value" << endl;
	for (j = 0; j < 10; j++)
	{
		cout << setw(7) << j << setw(13) << num[j] << endl;
	}

	min = num[0];
	for (i = 0; i < 10; i++)
	{
		if(num[i]<min)
		{
			min = num[i];
		}
	}

	max = num[0];
	for (i = 0; i < 10; i++)
	{
		if (num[i] > max)
		{
			max = num[i];
		}
	}

	aver = sum / 10.0;
	cout << endl << "最小值：" << min << " " << "最大值：" << max
		<< " " << "平均值：" << aver << endl;
	system("pause");
	return 0;
}