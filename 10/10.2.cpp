#include <iostream>
using namespace std;

struct date
{
	int year;
	int month;
	int day;
};

void fun(date d)
{
	int months[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int days = d.day;
	if (d.year % 4 == 0)
		months[2]++;
	for (int i = 1; i < d.month; i++)
	{
		days += months[i];
	}
	cout << "是一年中的第" << days << "天" << endl;
}

int main()
{
	date d;
	cout << "请输入年 月 日:" << endl;
	cin >> d.year >> d.month >> d.day;
	fun(d);
	system("pause");
	return 0;
}