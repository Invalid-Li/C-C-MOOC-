#include "iostream"
using namespace std;
int main()
{
	double x=0.00,y=0.00,temp=0.00;
	cout<<"��������ѡ��Ʒ��ֵ"<<endl;
	cin >>x;
	temp=x/1000;
	switch((int)temp)
	{
	case 0:y=x; break;
	case 1:y=0.9*x; break;
	case 2:y=0.8*x; break;
	default:y=0.7*x; 
	}
	cout<<"ʵ�����Ϊ��"<<y<<endl;
	system("pause");
	return 0;
}