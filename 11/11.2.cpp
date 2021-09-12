#include <iostream>
#include <cstring>
using namespace std;

struct staff
{
	char    num[6];      //ְ������
	char    name[20];    //ְ������
	double  wage;		//ְ������
	staff* next;
};

//ɾ��ָ�����ĺ���
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

//��������ĺ���
staff *node_create(int n)
{
	staff* head = NULL;
	staff* newstaff, * tail;
	cout << "������ְ���Ĺ��š����������ʣ�(�Կո�ָ�)" << endl;
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

//��������ĺ���
void node_display(staff* head)
{
	staff* p = head;
	cout << "��ǰְ����Ϣ���£�" << endl;
	while (p != NULL)
	{
		cout << p->num << " " << p->name << " " << p->wage << endl;
		p = p->next;
	}
}

//�޸Ĺ��ʵĺ���
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
		cout << "���Ų�����" << endl;
	}
	else
	{
		cout << "����Ҫ�����Ĺ����޸�Ϊ��" << endl;
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
	cout << "������������:" << endl;
	cin >> n;
	head = node_create(n);
	cout << "������Ҫɾ����ְ����Ϣλ�ã�" << endl;
	cin >> x;
	head = deln(head, x);
	node_display(head);
	cout << "������Ҫ�޸ĵ�ְ������:" << endl;
	cin >> num;
	head = wage_change(head, num);
	node_display(head);
	system("pause");
	return 0;
}