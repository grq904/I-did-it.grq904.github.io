#include <iostream>
using namespace std;

int main()
{
    int a , j ;
    cin >> a ;
    for ( int i = 1 ; i <= a ; i++ )
    {
    	for ( j = i ; j <= 2 * i - 1 ; j++ ) cout << j % 10 ;
    	cout << endl ;
	}
    return 0;
}

