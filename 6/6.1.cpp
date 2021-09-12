#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a[10][10];
	int n,i,j;
	cin >> n;
    a[0][0] = 1;
    for (i = 1; i < n; i++)
    {
        a[i][0] = 1;
        a[i][i] = 1;
        for (j = 1; j < i; j++)
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
    }
    for (i = 0; i < n; i++)
    {
        cout << setw((n - i) * 3) << ' ';
        for (j = 0; j <= i; j++)
        {
            cout << a[i][j] << setw(6);
        }
        cout << endl;
    }
    system("pause");
    return 0;
}