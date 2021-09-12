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
	//交换x,y的值
    if(x>z)
    {
		t=z;z=x;x=t;
	}
	//交换x,z的值
    if(y>z)
    {
		t=y;y=z;z=t;
	}
	//交换z,y的值
	cout<<x<<"≤"<<y<<"≤"<<z<<endl;
	system("pause");
	return 0;
}