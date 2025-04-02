#include <iostream>

using namespace std;

int main()
{
    string cadena;
    char palabra;
    int len, i=0, cont=0;
    cout<<"ingrese una cadena";
    getline(cin,cadena);
    cout<<"ingrese una palabra";
    cin>>palabra;
    len=cadena.length();

    while(i<len) {
        if (cadena.at(i)== palabra) {
            cont=cont+1;
        }
        i=i+1;
    }
    cout<<"el numero de veces que la palabra aparece"<<
        palabra<<"es" <<cont<<"."<<endl;

    return 0;
}
