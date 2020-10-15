#include <iostream>
using namespace std;

int main()
{
    int a , cnt = 0 , g , s , b , q ;
    cin >> a ;
    while ( a != 153 )
    {
		g = a % 10 ;
		s = a / 10 % 10 ;
		b = a / 100 % 10 ;
		q = a / 1000 ;
		a = g * g * g + s * s * s + b * b * b + q * q * q ;
		cnt++ ;
    }
    cout << cnt ;
    return 0;
}

