// Problema F - Falta de Sorte
#include <iostream>
#include <string>
using namespace std;

int main() {
    int K, N;
    cin >> K >> N;

    int limite = K;

    string nomes[42];
    int tentativas[42];

    for (int i = 0; i < N; i++) {
        cin >> nomes[i] >> tentativas[i];
    }

    bool encontrou = false;
    for (int i = 0; i < N; i++) {
        if (tentativas[i] == limite) {
            cout << nomes[i] << "\n";
            encontrou = true;
        }
    }

    if (!encontrou) {
        cout << "Nenhum azarado" << endl;
    }

    return 0;
}
