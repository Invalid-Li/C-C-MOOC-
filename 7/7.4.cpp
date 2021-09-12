#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char cchar[100], * p = cchar, i, k;
	int j;
	cout << "请输入一组字符串：" << endl;
	gets_s(cchar);
	j = strlen(cchar);
	for (i = 0; i < j / 2; i++)
	{
		k = *(p + i);
		*(p + i) = *(p + j - 1 - i);
		*(p + j - i - 1) = k;
	}
	cout << "逆序之后的字符串为：" << endl << p++ << endl;
	system("pause");
	return 0;
}