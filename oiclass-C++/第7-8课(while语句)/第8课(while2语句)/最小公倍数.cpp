#include <iostream>
using namespace std;

int main()
{
    long long e , f , g , a , b ;
    cin >> e ;
    cin >> f ;
    a = e ; 
    b = f ;
    g = e % f;
    while (g != 0)
    {
        e = f ;
        f = g ;
        g = e % f ;
    }
    cout << a * b / f ; 
    return 0;
}

