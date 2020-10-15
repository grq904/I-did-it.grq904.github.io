#include <iostream>
using namespace std;

int main ()
{
	int a [ 10 ] , n , t ;
	for ( int i = 0 ; i <= 9 ; i++ )cin >> a [ i ] ;
	cin >> n ;
	n = n + 30 ;
	for ( int i = 0 ; i <= 9 ; i++ )
	{
		if ( n >= a [ i ] ) t++;
	}
	cout << t ;
	return 0;
}
