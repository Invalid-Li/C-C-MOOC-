#include<iostream>
#include<cstring>
using namespace std;

int huiwen(char s[])
{
	int i, flag = 0, len;
	len = strlen(s);
	for(i=0;i<len/2;i++)
	{
		if (s[i] != s[len - i - 1])
		{
			flag = 1;
			break;
		}
	}
	if (flag)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int main()
{
	char s[100];
	cout << "������һ���ַ�����"<<endl;
	gets_s(s);
	if (huiwen(s))
		cout << "�ǻ���" << endl;
	else
	{
		cout << "���ǻ���" << endl;
	}
	system("pause");
	return 0;
}