#include <iostream>
using namespace std;

int n , f [ 50 ] , i ;
int main ()
{
	cin >> n ;
	f [ 1 ] = 1 ;
	f [ 2 ] = 1 ;
	for ( i = 3 ; i <= n ; i++ ) f [ i ] = f [ i - 1 ] + f [ i - 2 ] ;
	cout << f [ n ] ;
	return 0;
}
