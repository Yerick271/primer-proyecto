#include <iostream>

using namespace std;

int main()
{
    int n=20;

    int*ptr=&n;
    cout <<ptr<<endl;
    cout <<*&n<<endl;
    *ptr=60;
    cout<<n<<endl;

    int x=10;
    ptr=&x;
    *ptr=100;
    cout<<x<<endl;

    int y=1000;
    ptr=&y;
    *ptr=4000;
    cout<<y<<endl;

    int *ptr2=&x;
    cout<<*ptr2<<endl;

    double d=230.43;
    double *ptr3=&d;
    cout<< *ptr3<<endl;

    char car ='A';
    char *ptr4=&car;
    cout <<*ptr4<<endl;
    return 0;
}
