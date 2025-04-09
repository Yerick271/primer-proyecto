#include <iostream>

using namespace std;

int main()
{
    long long numero;
    bool flag =true;
    cout <<"ingrese un numero";
    cin>>numero ;

    if (numero <=1) {
        flag = false;
    }
    for (long long i=2; i*i<=numero; i++) {
        if(numero%i ==0) {
            flag= false;
            break;
        }
    }
    if(flag) {
        cout<<" es primo!!"<<endl;
    }
    else {
        cout<<"no es primo"<<endl;
    }
    return 0;
}
