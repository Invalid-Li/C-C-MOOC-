#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[100], t[100];
    int n;
    cout << "请输入字符串s：" << endl;
    gets_s(s);
    cout << "请输入从第几个字符开始复制：" << endl;
    cin >> n;
    char* p = s + n - 1;
    char* q = t;

    while (*(q++) = *(p++));

    cout << t << endl;
    return 0;
}