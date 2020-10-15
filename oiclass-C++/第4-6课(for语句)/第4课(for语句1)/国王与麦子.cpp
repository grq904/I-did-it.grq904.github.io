#include <iostream>
using namespace std;

int main()
{
    int n ; 
    long long tmp = 1 ;
    cin >> n ;
    for ( int i = 1 ; i < n ; i++ )
    {
        tmp *= 2 ;
    }

    cout << tmp ;
    return 0;
}
