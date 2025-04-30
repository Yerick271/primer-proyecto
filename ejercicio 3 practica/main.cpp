#include <iostream>

using namespace std;

int main()
{
    int arr1[] = {1,2,3,4,5,6};
    int arr2[] = {6,5,4,3,2,1};

    const int size= sizeof (arr1) / sizeof(arr1[0]);

    int arr3[size];
    for(int i=0; i<size; i++) {
        *(arr3+i)= *(arr1+i) + *(arr2+i);
    }
    for(int i=0; i<size; i++) {
        cout<<arr3[i]<<" ";
    }
    return 0;
}
