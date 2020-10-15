#include <iostream>
using namespace std;

int main()
{
    int n , tmp = 0 ;
    cin >> n ;
    while ( n != 1 )
    {
    	if ( n % 2 == 1 )
		{
			cout << n << " " ;
			n = n * 3 + 1 ;
			tmp++;
		}
		else
		{
			n = n / 2 ;
	    }
	}
	if ( tmp == 0 ){cout << "No number can be output!" ;}
    return 0;
}
