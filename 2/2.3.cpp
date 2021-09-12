#include "iostream"
using namespace std;
int main()
{
    char c1 = 'f', c2 = 'l', c3 = 'y';
    c1 = (c1 + 3 - 'a') % 26 + 'a';
    c2 = (c2 + 3 - 'a') % 26 + 'a';
    c3 = (c3 + 3 - 'a') % 26 + 'a';
    cout << c1 << c2 << c3 << endl;
    system("pause");
    return 0;
}