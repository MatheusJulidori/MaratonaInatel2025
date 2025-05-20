#include <iostream>
using namespace std;

int main() {
    int total;
    cin >> total;

    int contribuicao1, contribuicao2, contribuicao3;
    cin >> contribuicao1 >> contribuicao2 >> contribuicao3;

    int porPessoa = total / 3;

    int diferenca1 = contribuicao1 - porPessoa;
    int diferenca2 = contribuicao2 - porPessoa;
    int diferenca3 = contribuicao3 - porPessoa;

    cout << diferenca1 << " " << diferenca2 << " " << diferenca3 << endl;

    return 0;
}
