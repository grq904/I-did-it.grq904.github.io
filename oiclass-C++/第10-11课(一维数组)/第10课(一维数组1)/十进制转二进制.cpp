#include <iostream>
using namespace std;

int n , a [ 50 ] , b ;
int main ()
{
	cin >> n ;
	while ( n != 0 )
	{
		a [ ++b ] = n % 2 ;
		n = n / 2 ;
	}
	for ( int i = b ; i > 0 ; i-- ) cout << a [ i ] ;
	return 0;
}
