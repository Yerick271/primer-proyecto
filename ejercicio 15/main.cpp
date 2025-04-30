#include <iostream>

using namespace std;

int main()
{
    int arr[]={2,5,9,10,7,4,64,5};
    int size =sizeof(arr)/sizeof(arr[0]);
    int sum=0;

    for (int i=0; i<size; i++) {
        if (arr[i] % 2 !=0)
            sum+= arr[i];
    }

    cout<<"la suma de los impares es:"<<sum<<endl;

    return 0;
}
