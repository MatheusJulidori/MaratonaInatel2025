#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <climits>
using namespace std;

int calculaMaiorEspacoRestante(const vector<string>& palavras, int largura, int& linhasGeradas) {
    int espacoRestante = 0;
    int linhaAtual = 0;
    int atual = 0;
    int n = palavras.size();
    linhasGeradas = 0;

    while (atual < n) {
        int comprimento = palavras[atual].length();
        int fim = atual + 1;

        while (fim < n && comprimento + 1 + palavras[fim].length() <= largura) {
            comprimento += 1 + palavras[fim].length();
            fim++;
        }

        espacoRestante = max(espacoRestante, largura - comprimento);
        atual = fim;
        linhasGeradas++;
    }

    return espacoRestante;
}

void imprimirTexto(const vector<string>& palavras, int larguraIdeal) {
    int i = 0, n = palavras.size();
    while (i < n) {
        int comprimento = palavras[i].length();
        int fim = i + 1;

        while (fim < n && comprimento + 1 + palavras[fim].length() <= larguraIdeal) {
            comprimento += 1 + palavras[fim].length();
            fim++;
        }

        cout << palavras[i];
        for (int j = i + 1; j < fim; ++j) {
            cout << " " << palavras[j];
        }
        cout << "\n";
        i = fim;
    }
}

int main() {
    int N;
    cin >> N;
    cin.ignore();

    string linha;
    getline(cin, linha);
    istringstream iss(linha);

    vector<string> palavras;
    string palavra;
    int maiorPalavra = 0;

    while (iss >> palavra) {
        palavras.push_back(palavra);
        maiorPalavra = max(maiorPalavra, (int)palavra.size());
    }

    int melhorEspaco = INT_MAX;
    int melhorLinhas = 0;
    int melhorLargura = maiorPalavra;

    for (int largura = maiorPalavra; largura <= 200; ++largura) {
        int linhasUsadas = 0;
        int espacoAtual = calculaMaiorEspacoRestante(palavras, largura, linhasUsadas);

        if (linhasUsadas < 2) continue;

        if (espacoAtual < melhorEspaco || (espacoAtual == melhorEspaco && linhasUsadas > melhorLinhas)) {
            melhorEspaco = espacoAtual;
            melhorLinhas = linhasUsadas;
            melhorLargura = largura;
        }
    }

    cout << melhorLargura << "\n";
    imprimirTexto(palavras, melhorLargura);

    return 0;
}