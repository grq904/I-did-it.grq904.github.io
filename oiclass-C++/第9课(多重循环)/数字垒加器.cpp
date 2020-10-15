#include <iostream>
using namespace std;

int main()
{
    int a , b = 0 , i ;
    cin >> a ;
    for ( i = a ; i <= a ; i-- )
    {
    	for ( ; ( a - i ) % 7 == 0 ; ) 
		{
			cout << a - i << endl ;
			break ;
		}
	}
    return 0;
}

