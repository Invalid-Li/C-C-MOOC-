#include "iostream"
using namespace std;
int main()
{
	double a,b,c,x1,x2,delta;
	cout<<"请输入一元二次方程的三个系数a,b,c"<<endl;
	cin>>a>>b>>c;
	delta = sqrt(b*b - 4*a*c);
	if (delta < 0)
	{
		cout<<"方程没有实根"<<endl;
	}
	else
	{
		x1 = (-b+sqrt(delta))/(2*a);
		x2 = (-b-sqrt(delta))/(2*a);
		if (delta == 0)
		{
			cout<<"方程有两个相等的实根\n"<<"x1=x2="<<x1<<endl;
		}
		else 
		{
			cout<<"方程有两个不相等的实根\n"<<"x1="<<x1<<" , "<<"x2="<<x2<<endl;
		}
	}
	system("pause");
	return 0;
}