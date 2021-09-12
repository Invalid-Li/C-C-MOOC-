#include <iostream>
#include <cstring>
#define N 100
using namespace std;
struct book
{
	char name[100];
	double price;
};

void order(book *p,int n)
{
	book temp;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (strcmp(p[j].name, p[j + 1].name) == 1)
			{
				temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int i,n;
	book data[N];
	cout << "请输入图书数：";
	cin >> n;
	char temp = getchar();
	for (i = 0; i < n; i++)
	{
		cout << "请输入书名:";
		gets_s(data[i].name);
		cout << "请输入单价:";
		cin >> data[i].price;
		temp = getchar();
	}
	order(data, n);
	for (i = 0; i < n; i++)
	{
		cout << data[i].name << " " << data[i].price << endl;
	}
	system("pause");
	return 0;
}