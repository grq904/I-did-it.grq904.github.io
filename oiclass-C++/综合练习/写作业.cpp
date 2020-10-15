#include <iostream>
using namespace std;

int main()
{
    int n , x , y , tmp ;
    cin >> n >> x >> y;
    if ( y % x == 0 )
    {
        tmp = n - y / x ;
    }
    else
    {
        tmp = n - 1 - y / x ;
    }
    
    cout << tmp ;
    return 0;
}
