#include "iostream"
using namespace std;
int main()
{
    int num_1, temp_num, num_2 = 0;
    cin>>num_1;
    while (num_1 > 0)
    {
        temp_num = num_1 % 10;//�õ���ǰ�����ĸ�λ��
        num_2 = num_2 * 10 + temp_num;
        num_1 /= 10;//ȥ����λ��֮�����
    }
    cout<<num_2<<endl;
    system("pause");
    return 0;
}
