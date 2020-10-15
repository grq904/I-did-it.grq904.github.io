#include <iostream>
using namespace std;

int main()
{
    int n , m , a , tmp ;
    cin >> n >> m >> a ;
    tmp = ( n / a + 1 ) * ( m / a + 1 ) ;
    cout << tmp ;
    return 0;
}
