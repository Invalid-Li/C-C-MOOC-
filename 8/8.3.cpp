#include <iostream>
using namespace std;

int fun1(int s[], int n, int* x)
{
	int i, j, temp, grade_A = 0, grade_E = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 1; j < n - i; j++)
		{
			if (s[j - 1] < s[j])
			{
				temp = s[j - 1];
				s[j - 1] = s[j];
				s[j] = temp;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		if (s[i] >= 90)
		{
			grade_A++;
		}
		else if (s[i] < 60)
		{
			grade_E++;
		}
	}
	*x = grade_E;
	return grade_A;
}

int main()
{
	int i, n, grade[10], grade_A, grade_E;
	cout << "请输入要输入的学生成绩总数n：" << endl;
	cin >> n;
	cout << "请输入成绩：" << endl;
	for (i = 0; i < n; i++)
	{
		cin >> grade[i];
	}
	grade_A = fun1(grade, n, &grade_E);
	cout << "优秀学生数：" <<grade_A<<"  "<< "不及格学生数：" << grade_E << endl;
	system("pause");
	return 0;
}