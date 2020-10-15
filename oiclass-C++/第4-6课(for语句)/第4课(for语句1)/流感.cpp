#include <iostream>
using namespace std;

int main()
{
    long long x , n , tmp = 1 ;
    cin >> x >> n ;
    for ( int i = 1 ; i <= n ; i++ )
    {
        tmp = tmp + tmp * x ;
    }

    cout << tmp ;
    return 0;
}
