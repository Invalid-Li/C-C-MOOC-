#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[100], t[100];
    int n;
    cout << "�������ַ���s��" << endl;
    gets_s(s);
    cout << "������ӵڼ����ַ���ʼ���ƣ�" << endl;
    cin >> n;
    char* p = s + n - 1;
    char* q = t;

    while (*(q++) = *(p++));

    cout << t << endl;
    return 0;
}