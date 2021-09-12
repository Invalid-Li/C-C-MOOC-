#include "iostream"
using namespace std;
int main()
{
	int x,y,r1,r2;
	cin>>x>>y;
	if(x==0||y==0)//应为关系运算符
	{
		cout<<"input error"<<endl;//使用了中文引号
	}
	else
	{
		if(x>y)
		{
			r1=x/y;
			r2=x%y;
		}
		 else
		 {
			r1=y/x;
			r2=y%x;
		 }
	}
	cout<<"商="<<r1<<"余数="<<r2<<endl;
	system("pause");
	return 0;
}



