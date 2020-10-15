#include <iostream>
using namespace std;

int main()
{
    int n , tmp = 0 ;
    cin >> n ;
    for ( int i = 2 ; i <= n ; i++ )
    {
        if ( i < 10 && i * i % 10 == i ) { cout << i << " " ; }

        if ( i >= 10 && i < 100 && i * i % 100 == i ) { cout << i << " " ; }

        if ( i >= 100 && i < 1000 && i * i % 1000 == i ) { cout << i << " " ; }
    }
    return 0;
}
