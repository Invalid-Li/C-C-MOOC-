#include "iostream"
using namespace std;
int main()
{
	double a, x1, x0;
	cout << "������a��ֵ" << endl;
	cin >> a;
	x1 = a;
	do
	{
		x0 = x1;
		x1 = 2 * x0 / 3+a / (3 * x0 * x0);
	} while (fabs(x1 - x0) >= 1.0e-5);
	cout << "���̵Ľ�Ϊ" << x1 << endl;
	system("pause");
	return 0;
}