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
/* �޲ι��캯�� */
Mystring::Mystring()
{
    p = new char[N];
    length = 0;
}
/* �����ַ���(�����㳤��) */
void Mystring::input()
{
    cin >> p;
    char* t = p;
    while (*t) { t++, length++; }
}
/* ��ʾ�ַ��� */
void Mystring::show()
{
    cout << p << endl;
}
/* ����ַ������� */
long Mystring::stringLength()
{
    return length;
}
/* +���������(���������ַ���) */
Mystring& Mystring::operator+(Mystring& s) {
    char* t1 = p, * t2 = s.p;
    while (*t1) t1++;
    while (*t1++ = *t2++);
    return *this;
}
int main()
{
    Mystring s1, s2;
    cout << "�������ַ���1:";
    s1.input();
    cout << "�������ַ���2:";
    s2.input();
    cout << "����ַ���1:";
    s1.show();
    cout << "����ַ���1����:";
    cout << s1.stringLength() << endl;
    cout << "����2���ַ��������\n";
    s1 = s1 + s2;
    s1.show();
    return 0;
}