#include <iostream>
#include <cmath>
using namespace std;

class Point 
{
    double x, y;
public:
    Point(double x, double y) 
    {
        this->x = x;
        this->y = y;
    }
    double distance(const Point& p) 
    {
        return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
    }
};

int main()
{
    Point p1(2, 3), p2(4, 5);
    cout << p1.distance(p2) << endl;
    return 0;
}