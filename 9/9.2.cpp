#include <iostream>
#include <cstring>
using namespace std; 
char* get_max(char s[])
{
	char* max = s;
	for(char *p =s;*p!='\0';p++)
	{
		if (*p > *max)
			max= p;
	}
	return max;
}

int main()
{
	char s[100];
	cout << "ÇëÊäÈë×Ö·û´®£º" << endl;
	gets_s(s);
	char* p = get_max(s);
	while (*p != '\0')
	{
		*p -= 32;
		p++;
	}
	puts(s);
	system("pause");
	return 0;
}