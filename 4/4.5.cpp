#include "iostream"
using namespace std;
int main()
{
	double i=1,s=0,j=1;
	while(i<1.0e4)
	{
		s += (1/i);
		i += j;
		j++;
	}
	cout << "s=" << s << endl;
	system("pause");
	return 0;
}