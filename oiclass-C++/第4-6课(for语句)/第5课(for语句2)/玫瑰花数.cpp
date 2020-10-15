#include <iostream>
using namespace std;

int main()
{
    for ( int i = 1000 ; i <= 9999 ; i++ )
    {
        int ge = i % 10 , shi = i / 10 % 10 , bai = i / 100 % 10 , qian = i / 1000 ;
        if ( ge * ge * ge * ge + shi * shi * shi * shi + bai * bai * bai * bai + qian * qian * qian * qian == i ) 
        {
            cout << i << endl ;
        }
    }
    return 0;
}
