#include "iostream"
using namespace std;
int main()
{
	int i,x1,x2,x3;
	cout << "水仙花数有：" << endl;
	for (i = 100; i < 1000; i++)
	{
		x1 = i / 100;
		x2 = (i % 100) / 10;
		x3 = i % 10;
		if(pow(x1,3)+ pow(x2, 3)+pow(x3, 3) == i)
		{
			cout << i<<endl;
		}
	}
	system("pause");
	return 0;
}