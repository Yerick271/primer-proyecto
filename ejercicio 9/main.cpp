#include <iostream>

using namespace std;
/**
*dado un arreglo
*ordear dicho arreglo usando el algoritmo
*bubblesort
**/
void bubblesort (arr[], int size ){
    for (int i=0, i<size, i++) {
        for (int j=0, j<size-i-1, j++){
            if (arr[j]>arr[j+1]){
                int temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main()
{
    int arr[]={5,3,2,8,7,1,4,6};
    int size =sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr[], size)
    cout<<"["
    for (int i=0; i<size, i++) {
        cout <<arr[i] <<" ";
    cout <<"]"<<endl;
    }

    return 0;
}
