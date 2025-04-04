#include <iostream>
#include <vector>

using namespace std;

const int SIZE = 3;
vector<vector<char>> tablero(SIZE, vector<char>(SIZE, ' '));

void imprimirCaratula() {
    cout << "============================" << endl;
    cout << "       TRES EN RAYA        " << endl;
    cout << "============================" << endl;
}

void imprimirTablero() {
    cout << "\n  1   2   3" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << i + 1 << " ";
        for (int j = 0; j < SIZE; j++) {
            cout << tablero[i][j];
            if (j < SIZE - 1) cout << " | ";
        }
        cout << "\n";
        if (i < SIZE - 1) cout << " ---+---+---\n";
    }
}

bool verificarGanador(char jugador) {
    for (int i = 0; i < SIZE; i++) {
        if (tablero[i][0] == jugador && tablero[i][1] == jugador && tablero[i][2] == jugador) return true;
        if (tablero[0][i] == jugador && tablero[1][i] == jugador && tablero[2][i] == jugador) return true;
    }
    if (tablero[0][0] == jugador && tablero[1][1] == jugador && tablero[2][2] == jugador) return true;
    if (tablero[0][2] == jugador && tablero[1][1] == jugador && tablero[2][0] == jugador) return true;
    return false;
}

bool tableroLleno() {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            if (tablero[i][j] == ' ') return false;
    return true;
}

void jugar() {
    char jugador = 'X';
    int fila, columna;
    while (true) {
        imprimirTablero();
        cout << "Turno del jugador " << jugador << ". Ingrese fila y columna: ";
        cin >> fila >> columna;

        if (fila < 1 || fila > SIZE || columna < 1 || columna > SIZE || tablero[fila - 1][columna - 1] != ' ') {
            cout << "Movimiento inválido. Intente de nuevo.\n";
            continue;
        }

        tablero[fila - 1][columna - 1] = jugador;
        if (verificarGanador(jugador)) {
            imprimirTablero();
            cout << "¡Jugador " << jugador << " ha ganado!\n";
            break;
        }
        if (tableroLleno()) {
            imprimirTablero();
            cout << "¡Empate!\n";
            break;
        }
        jugador = (jugador == 'X') ? 'O' : 'X';
    }
}

int main() {
    imprimirCaratula();
    jugar();
    return 0;
}
