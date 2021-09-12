#include "iostream"
using namespace std;
int main()
{
    int  x, y, t;
    cin >> x >> y;
    t = x;
    x = y;
    y = t;
    cout << "x=" << x << ",y=" << y << endl;
    system("pause");
    return 0;
}