#include <iostream>
using namespace std;

int main()
{
    long long e , f , g , a , b , c , d ;
    cin >> a >> b >> c >> d ;
    a = a * d ;
    c = c * b ;
    b = b * d ;
    a = a + c ;
    e = a ;
    f = b ;
    g = e % f;
    while ( g != 0 )
    {
        e = f ;
        f = g ;
        g = e % f ;
    }
    cout << a / f << " " << b / f ;
    return 0;
}

