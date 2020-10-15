#include <iostream>
using namespace std;

int main()
{
    int m , tmp = 1 ;
    cin >> m ;
    for ( int i = 1 ; i < m ; i++ )
    {
        tmp = ( tmp + 1 ) * 2 ;
    }

    cout << tmp ;
    return 0;
}
