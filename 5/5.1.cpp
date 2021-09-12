#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
int main()
{
	int num[10],i,j,k,t,sum=0,min,max;
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
	
	for (i = 0; i <= 9; i++)
	{
		for (k = i+1; k <= 9; k++)
		{
			if (num[i] > num[k])
			{
				t = num[i];
				num[i] = num[k];
				num[k] = t;
			}
		}
	}
	min = num[0];
	max = num[9];
	aver = sum / 10.0;
	cout << endl << "最小值：" << min << " " << "最大值：" << max 
		<< " " << "平均值：" << aver<<" "<<"和："<<sum<< endl;
	system("pause");
	return 0;
}