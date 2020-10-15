#include <iostream>
using namespace std;

int main()
{
    int n , m , j ;
    cin >> n ;
    for ( int i = 1 ; i <= n ; i++ )
    {
    	for ( j = i ; j <= i ; j++ ) cout << j % 10 ;
		for ( j = i ; j <= n ; j-- ) cout << j % 10 ;
    	cout << endl ;
	}
    return 0;
}

