#include "iostream"
using namespace std;
int main()
{
	int x,y,z,t;
	cin>>x>>y>>z;
	if (x>y)
    {
		t=x;x=y;y=t;
	} 
	//����x,y��ֵ
    if(x>z)
    {
		t=z;z=x;x=t;
	}
	//����x,z��ֵ
    if(y>z)
    {
		t=y;y=z;z=t;
	}
	//����z,y��ֵ
	cout<<x<<"��"<<y<<"��"<<z<<endl;
	system("pause");
	return 0;
}