#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    const double PI = 3.1415926;
    double x, y;
    double s = PI * (4 * 4 - 2 * 2);
    cin >> x >> y;
    if (x * x + y * y >= 4 && x * x + y * y <= 16)
    {
        cout << s << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    system("pause");
    return 0;
}