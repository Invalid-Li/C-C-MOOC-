#include<iostream>
using namespace std;
#define P 5.52
#define PI 3.14159
int main()
{
	double v,m,r;
	cout << "请输入地球半径（以千米为单位）:" << endl;
	cin >>r;
	r = 1000 * r;//单位换算
	v = PI*(r*r*r)*4/3;
	m = P * v;
	cout <<"地球的质量为"<< m <<"吨。"<< endl;
	system("pause");
	return 0;
}