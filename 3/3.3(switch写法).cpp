#include "iostream"
using namespace std;
int main()
{
	double n1,n2,n;
	char op;
	cout<<"�����������1 �����op ������2"<<endl;
	cin>>n1>>op>>n2;
	switch(op)
	{
	case '+':n=n1+n2; break;
	case '-':n=n1-n2; break;
	case '*':n=n1*n2; break;
	case '/':n=n1/n2; break;
	default:
		cout<<"input error"<<endl;
		system("pause");
		return 0;
	}
	cout<<n1<<op<<n2<<'='<<n<<endl;
	system("pause");
	return 0;
}