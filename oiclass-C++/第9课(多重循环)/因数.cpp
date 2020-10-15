#include <iostream>
using namespace std;

int main()
{
    int a , cnt = 0 , g , s , b , q ;
    cin >> a ;
    for ( int i = 1 ; i <= a ; i++ )
    {
    	if ( a % i == 0 ) cout << i << endl ;
	}
    return 0;
}

