#include <iostream>
#include <ctime>
#include <string.h>
using namespace std;

int main()
{
    srand(unsigned(time(NULL)));
    int num[10];
    //随机产生0~100的10个数
    for (int i = 0; i < 10; ++i)
    {
        num[i] = rand() % 101;
    }

    for (int i = 0; i < 10; ++i)
    {
        cout << num[i] << ",";
    }
    //打印10个随机数

    int imax = 0, imin = 0;    //最大值下标、最小值下标
    for (int* p = num; p - num < 10; p++)//利用指针p扫描数组
    {
        if (*p < *(num + imin)) {
            imin = p - num; //更新最小值下标
        }
        if (*p > *(num + imax)) {
            imax = p - num; //更新最大值下标
        }
    }
    cout << endl;

    //最大值 最小值交换
    int t = *(num + imax);
    *(num + imax) = *(num + imin);
    *(num + imin) = t;

    //交换后的数组，10个数
    for (int i = 0; i < 10; ++i) {
        cout << num[i] << ",";
    }
    system("pause");
    return 0;
}