#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
#define N 256

//×Ö·û´®·­×ªº¯Êý
char* string_rev(char* str)
{
	int n = strlen(str);
	char temp;
	for (int i = 0; i < n/2; i++)
	{
		temp = str[i];
		str[i] = str[n - i - 1];
		str[n - i - 1] = temp;
	}
	return str;
}

int main()
{
	char str1[N],str2[N];
	FILE* fp;
	fp = fopen("f1.txt", "w");
	if (fp == NULL)
	{
		cout << "Unexist.";
		exit(0);
	}
	gets_s(str1);
	strcpy(str2, str1);
	string_rev(str2);
	strcat(str2, str1);
	puts(str2);
	fputs(str2, fp);
	fclose(fp);
	system("pause");
	return 0;
}