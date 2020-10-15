#include <iostream>
using namespace std;

int main()
{
    int n , tmp = 0 ;
    cin >> n ;
    for ( int i = 2 ; i < n ; i++ )
    {
        if ( n % i == 0 )
        {
            tmp++ ;
        }
    }

    if ( tmp == 0 )
    {
        cout << "NO" ;
    }
    else
    {
        cout << "YES" ;
    }
    return 0;
}
