#include <iostream>
using namespace std;

int main()
{
    long long n , tmp = 0 ;
    cin >> n ;
    for ( int i = 1 ; i <= n ; i++ )
    {
        if ( i % 3 == 0 )
        {
           tmp++ ;
        }
        
    }

    cout << tmp ;
    return 0;
}
