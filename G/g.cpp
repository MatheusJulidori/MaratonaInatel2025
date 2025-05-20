#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int quantidadeAtividades, limiteEnergia;
    cin >> quantidadeAtividades >> limiteEnergia;

    vector<int> tempoGasto(quantidadeAtividades), energiaGasta(quantidadeAtividades);
    for (int i = 0; i < quantidadeAtividades; i++) {
        cin >> tempoGasto[i] >> energiaGasta[i];
    }

    // dp[energia] = menor tempo para gastar exatamente "energia"
    const int INFINITO = 1e9;
    vector<int> menorTempo(limiteEnergia + 1, INFINITO);
    menorTempo[0] = 0;

    for (int i = 0; i < quantidadeAtividades; i++) {
        for (int energiaAtual = limiteEnergia; energiaAtual >= energiaGasta[i]; energiaAtual--) {
            if (menorTempo[energiaAtual - energiaGasta[i]] != INFINITO) {
                menorTempo[energiaAtual] = min(
                    menorTempo[energiaAtual],
                    menorTempo[energiaAtual - energiaGasta[i]] + tempoGasto[i]
                );
            }
        }
    }

    int melhorEnergia = 0;
    int tempoFinal = INFINITO;

    for (int energia = 0; energia <= limiteEnergia; energia++) {
        if (menorTempo[energia] != INFINITO) {
            if (energia > melhorEnergia || (energia == melhorEnergia && menorTempo[energia] < tempoFinal)) {
                melhorEnergia = energia;
                tempoFinal = menorTempo[energia];
            }
        }
    }

    cout << melhorEnergia << " " << tempoFinal << endl;

    return 0;
}