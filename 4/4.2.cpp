#include "iostream"
using namespace std;
int main()
{
    int num_1, temp_num, num_2 = 0;
    cin>>num_1;
    while (num_1 > 0)
    {
        temp_num = num_1 % 10;//得到当前整数的个位数
        num_2 = num_2 * 10 + temp_num;
        num_1 /= 10;//去除个位数之后的数
    }
    cout<<num_2<<endl;
    system("pause");
    return 0;
}
