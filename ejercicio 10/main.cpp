#include <iostream>

using namespace std;

int main()
{
    int n ;
    n=10;
    cout<<&n<<endl;
    cout<<n<<endl;

    int *ptr;
    ptr = &n;
    cout << ptr<<endl;
    cout<<*ptr<<endl;
    int m=20;
    ptr=&m;
    cout<<*ptr<<endl;
    return 0;
}
