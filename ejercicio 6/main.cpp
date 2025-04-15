#include <iostream>

using namespace std;

    int contadorpalabras (string cad, char car) {
        int cont=0;
        for (int i=0; i<cad.length(); i++) {
            if (cad.at(i)==car) {
                cont++;
            }
        }
    return cont;
}
int main()
{
    string cad="ciencia";
    cout <<contadorpalabras(cad, 'i')<< endl;
    return 0;
}
