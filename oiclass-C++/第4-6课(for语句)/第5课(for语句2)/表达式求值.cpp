#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    double n , sum ;
    cin >> n ;
    for ( double i = 2 ; i <= n ; i+= 2 )
    {
        sum += ( 1 / ( i - 1 ) - 1 / i) ;
    }
    cout << fixed << setprecision(8) << sum ;
    return 0;
}
