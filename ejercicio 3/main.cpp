#include <iostream>

using namespace std;

int main()
{
        string texto;
    cout << "Ingresa un texto: ";
    getline(cin, texto);  // lee toda la línea

    int i = 0;

    cout << "Vocales encontradas: ";
    do {
        char c = tolower( texto[i]);  // convierte a minúscula
        if (c == "a" || c == "e" || c == "i" || c == "o"|| c == "u") {
            cout << c << " ";
        }
        i++;
    } while (i < texto.length());
    return 0;
}
