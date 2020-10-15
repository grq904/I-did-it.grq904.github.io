#include <iostream>
using namespace std;

int main()
{
    long long n , tmp = 0 ;
    cin >> n ;
    for ( int i = 1 ; i <= n ; i++ )
    {
        tmp += i * ( n - i + 1 ) ;
    }

    cout << tmp ;
    return 0;
}
