#include<iostream>
using namespace std;
#define P 5.52
#define PI 3.14159
int main()
{
	double v,m,r;
	cout << "���������뾶����ǧ��Ϊ��λ��:" << endl;
	cin >>r;
	r = 1000 * r;//��λ����
	v = PI*(r*r*r)*4/3;
	m = P * v;
	cout <<"���������Ϊ"<< m <<"�֡�"<< endl;
	system("pause");
	return 0;
}