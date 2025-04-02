#include <iostream>

using namespace std;

int main()
{
    string cadena;
    cout <<"igrese una cadena";
    getline(cin,cadena);
    int len=cadena.length();
    int ini=0, fin=len-1;

    while (ini<=fin) {
        if (cadena.at (ini)=cadena.at(fin)) {
            cout <<"es un palindromo"<< endl;
            }else{
                cout<<"no es un palindromo"<< endl;
             }
        }
    }
    return 0;
}
