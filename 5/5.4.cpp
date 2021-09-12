#include <iostream>
using namespace std;

int main()
{
	int num[10], x, low=0, high=9,mid,i,flag = 0;
	cout << "请按顺序由大到小输入10个整数:" << endl;
	for (i = 0; i < 10; i++)
	{
		cin >> num[i];
	}
	cout << "请输入x:" << endl;
	cin >> x;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if(x == num[mid])
        {
        cout << "其在数组中的位置为：" << mid << endl;
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
        cout<<"所查询数据不在数组中."<<endl;
    }
    system("pause");
    return 0;
}