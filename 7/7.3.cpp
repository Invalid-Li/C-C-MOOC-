#include <iostream>
#include <ctime>
#include <string.h>
using namespace std;

int main()
{
    srand(unsigned(time(NULL)));
    int num[10];
    //�������0~100��10����
    for (int i = 0; i < 10; ++i)
    {
        num[i] = rand() % 101;
    }

    for (int i = 0; i < 10; ++i)
    {
        cout << num[i] << ",";
    }
    //��ӡ10�������

    int imax = 0, imin = 0;    //���ֵ�±ꡢ��Сֵ�±�
    for (int* p = num; p - num < 10; p++)//����ָ��pɨ������
    {
        if (*p < *(num + imin)) {
            imin = p - num; //������Сֵ�±�
        }
        if (*p > *(num + imax)) {
            imax = p - num; //�������ֵ�±�
        }
    }
    cout << endl;

    //���ֵ ��Сֵ����
    int t = *(num + imax);
    *(num + imax) = *(num + imin);
    *(num + imin) = t;

    //����������飬10����
    for (int i = 0; i < 10; ++i) {
        cout << num[i] << ",";
    }
    system("pause");
    return 0;
}