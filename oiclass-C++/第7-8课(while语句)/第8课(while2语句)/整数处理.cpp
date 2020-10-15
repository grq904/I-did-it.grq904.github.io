#include <iostream>
using namespace std;

int main()
{
    long long a , b = 0 , c ;
    cin >> a ;
	if ( a % 10 == 5 )
	{
		while ( a % 5 == 0 )
		{
			a = a / 5 ;
			b++;
		}
	}
	else
	{
		while ( a != 0 )
		{
			if ( a % 10 == 0 ) b++ ;
			a = a / 10 ;
		}
	}
    cout << b ;
    return 0;
}

