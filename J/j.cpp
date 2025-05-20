#include <iostream>
#include <vector>
using namespace std;

bool contemDigito(int numero, int digito) {
    string strNumero = to_string(numero);
    string strDigito = to_string(digito);
    char caractere = strDigito[0];
    return strNumero.find(caractere) != string::npos;
}


int main() {
    int numeroJogadores, ultimoNumero, multiplo, digito;
    cin >> numeroJogadores >> ultimoNumero >> multiplo >> digito;

    vector<int> contadorPi(numeroJogadores, 0);

    for (int i = 0; i <= ultimoNumero; i++) {
        bool dizPi = (i % multiplo == 0) || contemDigito(i, digito);
        if (dizPi) {
            int jogador = i % numeroJogadores;
            contadorPi[jogador]++;
        }
    }

    for (int i = 0; i < numeroJogadores; i++) {
        cout << contadorPi[i] << "\n";
    }

    return 0;
}
