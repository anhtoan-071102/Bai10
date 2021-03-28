#include <iostream>
using namespace std ;

struct point {
    double x ;
    double y ;

    point mid_point (const point p2)
        {
            point mid ;
            mid.x = (x + p2.x)/2 ;
            mid.y = (y + p2.y)/2 ;
            return mid ;
        }
    void print()
    {
        cout <<"(" << x << "," << y << ")" ;
   }
};

int main()
{
    point a , b ;
    cin >> a.x >> a.y >> b.x >> b.y ;
    point c = a.mid_point(b) ;
    c.print() ;
    return 0 ;
}
