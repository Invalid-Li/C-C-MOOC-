#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int grade[20], i, j, temp;
	srand((unsigned)time(NULL));
	for (i = 0; i < 20; i++)
	{
		grade[i] = rand() % 101;
	}

	cout << "δ����ɼ���" << endl;
	for (i = 0; i < 20; i++)
	{
		cout << grade[i]<<" ";
	}
	cout <<endl<< "������ɼ�(�Ӵ�С)��" << endl;
	for (i = 0; i < 20; i++)
	{
		for (j = i + 1; j < 20; j++)
		{
			if (grade[i] < grade[j])
			{
				temp = grade[i];
				grade[i] = grade[j];
				grade[j] = temp;
			}
		}
	}
	for (i = 0; i < 20; i++)
	{
		cout << grade[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}