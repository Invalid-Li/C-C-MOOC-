#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	FILE* fp;
	char s;
	if ((fp = fopen("f1.txt", "r")) == NULL)
	{
		cout << "Can't open this file!";
		exit(0);
	}
	while ((s = fgetc(fp)) != EOF)
	{
		cout << s << "(" << (int)s << ")";
	}
	fclose(fp);
	system("pause");
	return 0;
}