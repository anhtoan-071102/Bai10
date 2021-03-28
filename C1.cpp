#include <iostream>
#include <cstring>
using namespace std ;

struct String {
    int n ;
    char *str ;

    String(const char* _s)
    {
        n = strlen(_s) ;
        str = new char[n] ;
        strcpy(str,_s) ;
    }
    ~String()
    {
        delete [] str ;
    }
    void print()
    {
        cout << str << endl ;
    }

    void append(const char* _a)
    {
        str = strcat(str,_a) ;
    }
};

int main(int agrc , char* args)
{
    String s("hello la ") ;
    s.print() ;
    s.append("xinchao") ;
    s.print() ;
}

