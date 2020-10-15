#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n , sub1 , sub2 , sub3 , tmp = 0 ;
    cin >> n ;
    for ( int i = 10000 ; i <= 30000 ; i++ )
    {
        sub1 = i / 100 ;
        sub2 = i / 10 % 1000 ;
        sub3 = i % 1000 ;
        if ( sub1 % n == 0 && sub2 % n == 0 && sub3 % n == 0 )
        {
            tmp++ ;
            cout << i << endl ;
        }
    }
    if ( tmp == 0 )
    {
        cout << "No" ;
    }
    
    return 0;
}
