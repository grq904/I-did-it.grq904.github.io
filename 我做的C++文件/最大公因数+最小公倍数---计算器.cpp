#include <iostream>
using namespace std;

int main()
{
    long long e , f , g ;
    cout << "��һ����=" ;
    cin >> e ;
    cout << endl ;
    cout << "�ڶ�����=" ;
    cin >> f ;
    cout << endl ;
    g = e % f;
    while (g != 0)
    {
        e = f ;
        f = g ;
        g = e % f ;
    }
    cout << "���������" << f << endl ;
    
    int a , b , c ;
    a = e / f ;
    b = f / f ;
    c = a * b * f ;
    cout << "��С������:" << c;
    return 0;
}

