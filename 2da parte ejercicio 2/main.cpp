#include <iostream>

using namespace std;

int * f()
    int *ptr1 =new int;
    *ptr1 =50;
    return ptr1;

}

int main()
{
    int *ptr = new int;
    *ptr =10;
    cout<<*ptr<<endl;
    delete ptr;

    int*ptr2 =f();
    cout<<ptr2<<endl;
    delete ptr2;

    return 0;
}
