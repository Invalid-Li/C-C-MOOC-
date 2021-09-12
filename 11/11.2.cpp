#include <iostream>
#include <cstring>
using namespace std;

struct staff
{
	char    num[6];      //职工工号
	char    name[20];    //职工姓名
	double  wage;		//职工工资
	staff* next;
};

//删除指定结点的函数
staff* deln(staff* head, int n)
{
	staff* p = head;
	staff* q;
	q = new staff;
	if (head != NULL)
	{
		if (n == 1)
		{
			head = p->next;
			delete p;
		}
		else
		{
			while (--n)
			{
				q = p;
				p = p->next;
			}
			q->next = p->next;
			delete p;
		}
	}
	return head;
}

//创建链表的函数
staff *node_create(int n)
{
	staff* head = NULL;
	staff* newstaff, * tail;
	cout << "请输入职工的工号、姓名、工资：(以空格分隔)" << endl;
	tail = new staff;
	while (n--)
	{
		newstaff = new staff;
		cin >> newstaff->num >> newstaff->name >> newstaff->wage;
		if (head == NULL)
		{
			head = newstaff;
		}
		else
		{
			tail->next = newstaff;
		}
		tail = newstaff;
	}
	tail->next = NULL;
	return head;
}

//遍历链表的函数
void node_display(staff* head)
{
	staff* p = head;
	cout << "当前职工信息如下：" << endl;
	while (p != NULL)
	{
		cout << p->num << " " << p->name << " " << p->wage << endl;
		p = p->next;
	}
}

//修改工资的函数
staff* wage_change(staff* head, char num[])
{
	staff* p = head;
	double wage;
	while (strcmp(p->num, num))
	{
		p = p->next;
		if (p == NULL)
		{
			break;
		}
	}
	if (p == NULL)
	{
		cout << "工号不存在" << endl;
	}
	else
	{
		cout << "请问要把他的工资修改为：" << endl;
		cin >> wage;
		p->wage = wage;
	}
	return head;
}

int main()
{
	staff* head;
	int n, x;
	char num[6];
	cout << "请输入链表长度:" << endl;
	cin >> n;
	head = node_create(n);
	cout << "请输入要删除的职工信息位置：" << endl;
	cin >> x;
	head = deln(head, x);
	node_display(head);
	cout << "请输入要修改的职工工号:" << endl;
	cin >> num;
	head = wage_change(head, num);
	node_display(head);
	system("pause");
	return 0;
}