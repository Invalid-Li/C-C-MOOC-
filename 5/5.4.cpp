#include <iostream>
using namespace std;

int main()
{
	int num[10], x, low=0, high=9,mid,i,flag = 0;
	cout << "�밴˳���ɴ�С����10������:" << endl;
	for (i = 0; i < 10; i++)
	{
		cin >> num[i];
	}
	cout << "������x:" << endl;
	cin >> x;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if(x == num[mid])
        {
        cout << "���������е�λ��Ϊ��" << mid << endl;
        flag = 1;
        break;
        }
        else if (x < num[mid])
        {
            high = mid - 1;
        }
        else if (x > num[mid])
        {
            low = mid + 1;
        }
        
    }
    if (flag == 0)
    {
        cout<<"����ѯ���ݲ���������."<<endl;
    }
    system("pause");
    return 0;
}