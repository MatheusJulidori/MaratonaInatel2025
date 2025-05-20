#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

const long long INFINITO = 1e18;

int main() {
    int totalLocais, totalRuas, localPalco;
    cin >> totalLocais >> totalRuas >> localPalco;

    // Mapa da cidade (grafo não-direcionado)
    vector<vector<pair<int, int>>> mapa(totalLocais + 1);
    for (int i = 0; i < totalRuas; i++) {
        int origem, destino, distancia;
        cin >> origem >> destino >> distancia;
        mapa[origem].push_back(make_pair(destino, distancia));
        mapa[destino].push_back(make_pair(origem, distancia));
    }

    // Estacionamentos e suas capacidades (em veículos)
    int totalEstacionamentos;
    cin >> totalEstacionamentos;
    vector<int> vagasPorEstacionamento(totalLocais + 1, 0);
    for (int i = 0; i < totalEstacionamentos; i++) {
        int local, vagas;
        cin >> local >> vagas;
        vagasPorEstacionamento[local] = vagas;
    }

    // Veículos e quantidade de pessoas em cada um
    int totalVeiculos;
    cin >> totalVeiculos;
    vector<int> pessoasPorVeiculo(totalVeiculos);
    for (int i = 0; i < totalVeiculos; i++) {
        cin >> pessoasPorVeiculo[i];
    }

    // Dijkstra a partir do local do palco
    vector<long long> menorDistancia(totalLocais + 1, INFINITO);
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> fila;

    menorDistancia[localPalco] = 0;
    fila.push(make_pair(0, localPalco));

    while (!fila.empty()) {
        pair<long long, int> atual = fila.top(); fila.pop();
        long long distanciaAtual = atual.first;
        int localAtual = atual.second;

        if (distanciaAtual > menorDistancia[localAtual]) continue;

        for (size_t i = 0; i < mapa[localAtual].size(); i++) {
            int vizinho = mapa[localAtual][i].first;
            int custo = mapa[localAtual][i].second;
            if (menorDistancia[localAtual] + custo < menorDistancia[vizinho]) {
                menorDistancia[vizinho] = menorDistancia[localAtual] + custo;
                fila.push(make_pair(menorDistancia[vizinho], vizinho));
            }
        }
    }

    // Preparar lista de estacionamentos válidos e ordenados por proximidade
    vector<pair<long long, int>> estacionamentosOrdenados;
    for (int i = 1; i <= totalLocais; i++) {
        if (vagasPorEstacionamento[i] > 0 && menorDistancia[i] < INFINITO) {
            estacionamentosOrdenados.push_back(make_pair(menorDistancia[i], i));
        }
    }
    sort(estacionamentosOrdenados.begin(), estacionamentosOrdenados.end());

    // Ordenar veículos por quantidade de pessoas (do maior para o menor)
    sort(pessoasPorVeiculo.rbegin(), pessoasPorVeiculo.rend());

    long long somaTotal = 0;

    // Alocar veículos
    for (int i = 0; i < totalVeiculos; i++) {
        int pessoas = pessoasPorVeiculo[i];
        bool alocado = false;

        for (size_t j = 0; j < estacionamentosOrdenados.size(); j++) {
            long long distancia = estacionamentosOrdenados[j].first;
            int local = estacionamentosOrdenados[j].second;

            if (vagasPorEstacionamento[local] > 0) {
                somaTotal += pessoas * distancia;
                vagasPorEstacionamento[local]--;
                alocado = true;
                break;
            }
        }

        if (!alocado) {
            cout << "Temos um problema" << endl;
            return 0;
        }
    }

    cout << somaTotal << endl;
    return 0;
}