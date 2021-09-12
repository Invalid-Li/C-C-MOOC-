#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str[100], * p = str;
    gets_s(str);//VS2019下gets()，其他版本下运行需修改
    for (; *p != '\0'; p++)
    {
        if (*p >= 'a' && *p <= 'z')//如果小写转大写
            *p -= 32;
        else if (*p >= 'A' && *p <= 'Z')//如果大写转小写
            *p += 32;
    }
    p = str;
    puts(p);
    system("pause");
    return 0;
}