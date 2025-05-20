#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int armario[4];
        for (int i = 1; i <= 3; ++i) {
            cin >> armario[i];
        }

        bool conseguiu = false;
        for (int i = 0; i < 3; ++i) {
            int chave;
            cin >> chave;
            if (chave >= 1 && chave <= 3 && armario[chave] == 0) {
                conseguiu = true;
            }
        }

        cout << (conseguiu ? "SIM" : "NAO") << "\n";
    }

    return 0;
}
