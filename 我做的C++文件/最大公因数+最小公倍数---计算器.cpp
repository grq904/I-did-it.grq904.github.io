#include <iostream>
using namespace std;

int main()
{
    long long e , f , g ;
    cout << "第一个数=" ;
    cin >> e ;
    cout << endl ;
    cout << "第二个数=" ;
    cin >> f ;
    cout << endl ;
    g = e % f;
    while (g != 0)
    {
        e = f ;
        f = g ;
        g = e % f ;
    }
    cout << "最大公因数：" << f << endl ;
    
    int a , b , c ;
    a = e / f ;
    b = f / f ;
    c = a * b * f ;
    cout << "最小公倍数:" << c;
    return 0;
}

