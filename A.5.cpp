#include <iostream>
using namespace std ;
struct a{

    int *b = new int[5] ;
};


int main(int agrc ,char* args)
{
    a c ,d ;
    for (int i = 0 ; i < 5 ; i++)
    {
        cin >> c.b[i] ;
        d.b[i] = c.b[i] ;
    }
    for (int i = 0 ; i < 5 ; i++)
    {
        cout << &c.b[i] << '\t' << '\n' ;
        cout << c.b[i] <<'\t' << '\n' ;
        cout << d.b[i] <<'\t' << '\n' ;
        cout << &d.b[i] <<'\t' << '\n' ;
    }
    return 0 ;
}
//=============>
//GIÁ TRỊ GIÔNG NHAU , ĐỊA CHỈ KHÁC NHAU.
