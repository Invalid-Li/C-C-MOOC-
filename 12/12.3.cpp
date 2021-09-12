#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;
#define N 3

struct student
{
	char num[8];
	double grade;
};

int main()
{
	int i;
	student s[N],t[N];
	FILE* fp;
	if ((fp=fopen("student.dat", "wb")) == NULL)
	{
		cout << "Can't open this file" << endl;
		exit(0);
	}
	cout << "请输入学号 成绩：" << endl;
	for (i = 0; i < N; i++)
	{
		cin >> s[i].num >> s[i].grade;
		fwrite(&s[i], sizeof(student), 1, fp);
	}
	fclose(fp);
	if ((fp = fopen("student.dat", "rb")) == NULL)
	{
		cout << "Can't open this file" << endl;
		exit(0);
	}
	fread(t, sizeof(t), 1, fp);
	cout << "学号及成绩如下：" << endl;
	for (i = 0; i < N; i++)
	{
		cout << t[i].num << " " << t[i].grade << endl;
	}
	fclose(fp);
	system("pause");
	return 0;
}