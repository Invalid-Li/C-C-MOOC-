#include "iostream"
using namespace std;
int main()
{
	int n, sum = 0;
	//sum未初始化赋值
	for (n = 1; ; n += 2)
		//不应该有;
	{
		//循环体用{}括起来
		sum = sum + n;
		if (n == 19) break;
		//计算1-20的奇数和，应该到19就停止
	}
	cout << "sum=" << sum << endl;
	system("pause");
	return 0;
}