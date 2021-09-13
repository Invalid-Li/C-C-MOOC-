#include <iostream>
using namespace std;
#define N 256
class Mystring {
    char* p;
    long length;
public:
    Mystring();
    void input();
    void show();
    long stringLength();
    Mystring& operator+(Mystring& s);
};
/* 无参构造函数 */
Mystring::Mystring()
{
    p = new char[N];
    length = 0;
}
/* 输入字符串(并计算长度) */
void Mystring::input()
{
    cin >> p;
    char* t = p;
    while (*t) { t++, length++; }
}
/* 显示字符串 */
void Mystring::show()
{
    cout << p << endl;
}
/* 输出字符串长度 */
long Mystring::stringLength()
{
    return length;
}
/* +运算符重载(连接两个字符串) */
Mystring& Mystring::operator+(Mystring& s) {
    char* t1 = p, * t2 = s.p;
    while (*t1) t1++;
    while (*t1++ = *t2++);
    return *this;
}
int main()
{
    Mystring s1, s2;
    cout << "请输入字符串1:";
    s1.input();
    cout << "请输入字符串2:";
    s2.input();
    cout << "输出字符串1:";
    s1.show();
    cout << "输出字符串1长度:";
    cout << s1.stringLength() << endl;
    cout << "连接2个字符串并输出\n";
    s1 = s1 + s2;
    s1.show();
    return 0;
}