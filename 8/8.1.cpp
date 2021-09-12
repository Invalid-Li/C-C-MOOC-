#include<iostream>
using namespace std;

bool isprime(int m)
{
	int i;
	if (m == 2)
		return true;
	else
	{
		for (i = 2; i < m; i++)
		{
			if (m % i == 0)
			{
				break;
			}
		}
		if (m == i)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
	
int main()
{
	int i, j=0;
	for (i = 0; j < 10; i++)
	{
		if (isprime(i) && isprime(i + 2))
		{
			cout << "<" << i << "," << i + 2 << ">" << endl;
			j++;
		}
	}

	system("pause");
	return 0;
}
