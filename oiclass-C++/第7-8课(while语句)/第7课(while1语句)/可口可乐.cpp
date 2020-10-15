#include <iostream>
using namespace std;

int main()
{
    int k , s , maxi ;
    cin >> k ;
    s = k ;
    while ( k >= 3 )
    {
        s = s + k / 3 ;
        k = k / 3 + k % 3 ;
	}
	cout << s ;
    return 0;
}
