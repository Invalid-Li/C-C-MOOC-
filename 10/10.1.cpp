#include <iostream>
using namespace std;
#define N 100

struct student
{
	char* num;
	int score;
};

student max(student s[],int n)
{
	student t;
	t.num = new char;
	t = s[0];
	for (int i = 0; i < n; i++)
	{
		if (s[i].score > t.score)
		{
			t = s[i];
		}
	}
	return t;
}

int main()
{
	student data[N];
	int i,n;
	cout << "������ѧ��������" << endl;
	cin >> n;
	cout << "������ѧ�� ������" << endl;
	for (i = 0; i < n; i++)
	{
		data[i].num = new char[10];
		cin >>data[i].num>> data[i].score;
	}
	cout << "��߷���Ϣ��" << endl;
	cout<<max(data,n).num<<" "<<max(data, n).score << endl;
	for (i = 0; i < n; i++)
	{
		delete data[i].num;
	}
	system("pause");
	return 0;
}