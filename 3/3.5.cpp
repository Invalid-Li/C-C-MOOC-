#include "iostream"
using namespace std;
int main()
{
	double a,b,c,x1,x2,delta;
	cout<<"������һԪ���η��̵�����ϵ��a,b,c"<<endl;
	cin>>a>>b>>c;
	delta = sqrt(b*b - 4*a*c);
	if (delta < 0)
	{
		cout<<"����û��ʵ��"<<endl;
	}
	else
	{
		x1 = (-b+sqrt(delta))/(2*a);
		x2 = (-b-sqrt(delta))/(2*a);
		if (delta == 0)
		{
			cout<<"������������ȵ�ʵ��\n"<<"x1=x2="<<x1<<endl;
		}
		else 
		{
			cout<<"��������������ȵ�ʵ��\n"<<"x1="<<x1<<" , "<<"x2="<<x2<<endl;
		}
	}
	system("pause");
	return 0;
}