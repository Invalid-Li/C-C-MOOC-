#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;
#define N 100

//��ֵͳ�ƺ���
int num_count(int num[], int n, int way)
{
	int num_count=0;
	for (int i = 0; i < n; i++)
	{
		if(way==0)
		{
			if (num[i] == 0)
			{
				num_count++;
			}
		}
		else if(way == -1)
		{
			if (num[i] < 0)
			{
				num_count++;
			}
		}
		else if(way == 1)
		{
			if (num[i] > 0)
			{
				num_count++;
			}
		}
		
	}
	return num_count;
}

int main()
{
	FILE* fp;
	int num_0,num[N],n=0;
	fp = fopen("f2.txt", "r");
	if (fp == NULL)
	{
		cout << "Can't open this file!" << endl;
		exit(0);
	}
	for (int i = 0; fscanf(fp, "%d", &num_0)==1; i++)
	{
		num[i] = num_0;
		n++;
	}
	cout <<"0�ĸ���Ϊ��"<< num_count(num, n, 0)<<endl;
	cout <<"����������Ϊ��" << num_count(num, n, 1) << endl;
	cout << "����������Ϊ��" << num_count(num, n, -1) << endl;
	fclose(fp);
	system("pause");
	return 0;
}