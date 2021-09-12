#include <iostream>
#include <cstring>
using namespace std;
#define N 100

struct node
{
	char str[N];
	node* next;
};

node *node_create(int n)
{
	node* head = NULL;
	node* newnode, *tail;
	tail = new node;
	for (int i = 0; i < n; i++)
	{
		newnode = new node;
		cout << "输入一串字符:" << endl;
		cin >> newnode->str;
		if (head == NULL)
		{
			head = newnode;
		}
		else
		{
			tail->next = newnode;
		}
		tail = newnode;
	}
	tail->next = NULL;
	return head;
}

void node_print(node* head)
{
	node* p = head;
	while (p != NULL)
	{
		cout << p->str;
		p = p->next;
	}
	cout << endl;
}

node* order(node* head)
{
	node* p = head;
	node* q = p->next,*temp;
	temp = new node;
	while (q != NULL)
	{
		if (strcmp(p->str,q->str)==1)
		{
			strcpy_s(temp->str, p->str);
			strcpy_s(p->str, q->str);
			strcpy_s(q->str, temp->str);
		}
		p = p->next;
		q = p->next;
	}
	return head;
}

int main()
{
	int n;
	node* head;
	cout << "输入个数：" << endl;
	cin >> n;
	head = node_create(n);
	head = order(head);
	node_print(head);
	system("pause");
	return 0;
}