#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[100], * p = str;
    gets_s(str);//VS2019��gets()�������汾���������޸�
    for (; *p != '\0'; p++)
    {
        if (*p >= 'a' && *p <= 'z')//���Сдת��д
            *p -= 32;
        else if (*p >= 'A' && *p <= 'Z')//�����дתСд
            *p += 32;
    }
    p = str;
    puts(p);
    system("pause");
    return 0;
}