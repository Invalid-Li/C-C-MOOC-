#include <iostream>
using namespace std;
#define N 256
class Fraction {
private:
    int fz, fm;
public:
    /* 构造 */
    Fraction(int z, int m) {
        fz = z;
        fm = m;
    }
    /* 输出 */
    void print() {
        Reduction();
        cout << fz << "/" << fm << endl;
    }
private:
    /* 约分 */
    void Reduction() {
        int t = fz < fm ? fz : fm;
        while (fz % t != 0 || fm % t != 0)
            t--;
        fz /= t;
        fm /= t;
    }
};

int main()
{
    Fraction f(12, 16);
    f.print();
    return 0;
}