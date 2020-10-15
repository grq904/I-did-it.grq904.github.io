#include <iostream>
using namespace std;

int main()
{
    int n , tmp = 1 ;
    cin >> n ;
    for ( int i = 1 ; i <= n ; i+=2 )
    {
        tmp *= i ;
    }

    cout << tmp ;
    return 0;
}
