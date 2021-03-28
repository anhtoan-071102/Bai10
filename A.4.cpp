#include <iostream>
using namespace std ;

struct point{
    double x ;
    double y ;

    void nhap(double _x , double _y)
    {
        x = _x ;
        y = _y ;
    }
};

int main(int argc , char* args)
{
    point c ;
    cout <<"dia chi cua c " << &c << endl ;
    cout <<"dia chi cua c.x " << c.x << endl ;
    cout <<"dia chi cua c.y " << c.y << endl ;
}

/* =====================
ĐỊA CHỈ CỦA BIẾN c KHÁC ĐỊA CHỈ CỦA TRƯỜNG x,y CỦA CHÍNH BIẾN ĐÓ
ĐỊA CHỈ CỦA 2 TRƯỜNG x,y CỦA BIẾN c KHÁC NHAU.
*/
