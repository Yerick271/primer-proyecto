#include <iostream>

using namespace std;
/**
*implemente un programa que invierta los numeros
*de un arregle de enteros
**/

int main()
{
    int arr[] ={1,2,3,4,5,6,7,8};
    int size =sizeof(arr)/sizeof(arr[0]);

    cout<<"[";
    for (int i=0; i<size, i++)
        cout <<arr[i] <<" ";
    cout <<"]"<<endl;


    int ini=0;
    int fin=size -1;
    while (ini<fin) {
        int temp =arr[ini];
        arr[ini]=arr[fin];
        arr[fin]=temp;
        ini++:
        fin--:
    }
    cout<<"["
    for (int i=0; i<size, i++) {
        cout <<arr[i] <<" ";
    cout <<"]"<<endl;
    }

    return 0;
}
