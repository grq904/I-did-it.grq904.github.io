#include <iostream>
using namespace std;

int main()
{
    int b , w , j , t = 1 , p = 0 ;
    cin >> b >> w >> j ;
    p = b ; 
    while ( p < j )
    {
    	p -= w ;
		t++;
    	p += b ;
	}
	cout << t ;
    return 0;
}
