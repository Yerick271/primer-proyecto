#include <iostream>

using namespace std;


void printArray(int *arr, int size) {
        cout << "[ ";
    for(int i = 0; i < size; i++, arr++)
        cout << arr[i] << " ";
    cout << "]" << endl;


int main()
{
    int *ptr;
    int arreglo[6];
    arreglo[0] = 10;
    arreglo[1] = 1;
    arreglo[2] = 5;
    arreglo[3] = 8;
    arreglo[4] = 6;
    arreglo[5] = 18;

    int size=sizeof(arreglo)/sizeof(arreglo[0]);
    ptr=arreglo;

    for(int i=0; i < size; i++, ptr++){
        cout<<*ptr<<" ";


    }

    ptr=arreglo;
    int i=0;
    while (i<size) {
        cout<<*ptr<<" ";
        i++;
        ptr++;
    }

    printArray(arreglo, size);


    return 0;
}
