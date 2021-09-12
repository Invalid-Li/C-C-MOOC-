#include <iomanip>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string str = "aaaasdfga";
	char a = 'a';
	int i,j,len;
	len = str.size();

	for (i = 0; i <= len; i++)
	{
		if (str[i] == a) break;
		for (j = i; j <= len-1; j++)
		{
			str[i] = str[i + 1];
		}
	}
	cout << str << endl;
	system("pause");
	return 0;
}