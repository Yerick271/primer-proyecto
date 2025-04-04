# include <iostream>
using namespace std;
int main()
{
    int filas=3;
    int columnas=4;
    int cont=1;
    int i=0;

    do {
        int j=0;
        do {
            cout<<cont<<"\t";
            cont++;
            j++;
            }
        while(j<columnas);

        cout<< endl;
        i++;
    } while (i<filas);

    return 0;
}
