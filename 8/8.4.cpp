#include <iostream>
#include <cstring>
#pragma warning (disable: 4996)//vs2012�¿�ɾ��
using namespace std;

void freq(char s[], int p[], char& chmax, int& max)
{
	
	int i;
	for (i = 0; i < 26; i++)
	{
		p[i] = 0;
	}
	strlwr(s);
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			p[s[i]-'a']++;
		}
	}
	max = p[0];
	chmax = 'a';
	for (i = 0; i < 26; i++)
	{
		if (p[i] > max)
		{
			max = p[i];
			chmax = i + 'a';
		}
	}
}

int main()
{
	int p[26], i, max;
	char s[100], chmax;
	gets_s(s);//vs2012�����Ϊgets(s);
	freq(s, p, chmax, max);
	for (i = 0; i < 26; i++)
	{
		if (p[i])
		{
			cout << char(i + 'a') << "----" << p[i] << endl;
		}
	}
	cout << "����Ƶ����ߵ���ĸ��" << chmax << "----" << max << endl;
	system("pause");
	return 0;
}