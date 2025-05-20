#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    const int MAX = 1001;
    vector<vector<int>> grafo(MAX);
    int grau[MAX] = {0};
    bool usado[MAX] = {false};

    for (int i = 0; i < N; i++) {
        int m, d;
        cin >> m >> d;
        usado[m] = true;
        if (d != 0) {
            grafo[d].push_back(m);
            grau[m]++;
            usado[d] = true;
        }
    }

    priority_queue<int, vector<int>, greater<int>> fila;
    for (int i = 1; i < MAX; i++) {
        if (usado[i] && grau[i] == 0) {
            fila.push(i);
        }
    }

    vector<int> ordem;
    while (!fila.empty()) {
        int atual = fila.top();
        fila.pop();
        ordem.push_back(atual);

        for (int viz : grafo[atual]) {
            grau[viz]--;
            if (grau[viz] == 0) {
                fila.push(viz);
            }
        }
    }

    int totalUsados = 0;
    for (int i = 1; i < MAX; i++) {
        if (usado[i]) totalUsados++;
    }

    if ((int)ordem.size() != totalUsados) {
        cout << "Duda precisa voltar para o Brasil!" << endl;
    } else {
        for (int m : ordem) {
            cout << m << " ";
        }
        cout << endl;
    }

    return 0;
}
