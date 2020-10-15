#include <iostream>
using namespace std;

int main()
{
    int n , sum = 0 ;
    cin >> n ;
    if ( n % 2 == 1 )
    {
        for ( int i = 2 ; i <= n ; i++ )
        {
            sum = sum + i ;
            i++ ;
        }
    }
    if ( n % 2 == 0 )
    {
        for ( int i = 1 ; i <= n ; i++ )
        {
            if ( n % i == 0)
            {
                sum = sum + i ;
            }
        }
    }
    cout << sum ;
    return 0;
}
