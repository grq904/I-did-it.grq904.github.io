#include <iostream>
using namespace std;

int main()
{
    long long e , f , g ;
    cin >> e >> f ;
    g = e % f;
    while (g != 0)
    {
        e = f ;
        f = g ;
        g = e % f ;
    }
    cout << f << endl ;
    return 0;
}

