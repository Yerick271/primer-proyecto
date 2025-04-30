#include <iostream>

using namespace std;

int main()
{
    int arr[]={2,5,9,10,7,4,64,5};
    int mayor1=0;
    int mayor2=0;
    int size= sizeof(arr)/ sizeof(arr[0]);

    for(int i=0; i<size; i++) {
        if (arr[i]> mayor1) {
            mayor1=arr[i];
        }
    }

    for(int i=0; i<size; i++) {
        if (arr[i]== mayor1)

        continue;
        if (arr[i]>mayor2){
            mayor2=arr[i];
        }
    }
    cout<<mayor2<<endl;
    return 0;
}
