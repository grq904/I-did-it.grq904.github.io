#include <iostream>
using namespace std;

int main ()
{
	int n , m , t ;
	cin >> n ;
	int a [ n ] ;
	for ( int i = 1 ; i <= n ; i++ )cin >> a [ i ] ;
	cin >> m ;
	for ( int i = 1 ; i <= n ; i++ )
	{
		if ( m == a [ i ] ) t++;
	}
	cout << t ;
	return 0;
}
