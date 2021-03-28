
#include <iostream>
using namespace std ;

struct point
{
    double x ;
    double y;
};
// chuyen tham tri ;
void print(point v)
{
    cout << "(" <<v.x<<","<<v.y<<")" << endl ;
    cout << &v << endl ;
}

int main()
{
    point a ;
    cin >> a.x  >> a.y;
    print(a) ;
    cout << " " << &a << endl;
}
//  ta co &a != &v ;

// TH 2 chuyen tham bien

void  print(point &v)
// &a == &b ;

