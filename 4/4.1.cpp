#include "iostream"
using namespace std;
int main()
{
	int n, sum = 0;
	//sumδ��ʼ����ֵ
	for (n = 1; ; n += 2)
		//��Ӧ����;
	{
		//ѭ������{}������
		sum = sum + n;
		if (n == 19) break;
		//����1-20�������ͣ�Ӧ�õ�19��ֹͣ
	}
	cout << "sum=" << sum << endl;
	system("pause");
	return 0;
}