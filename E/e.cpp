#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int alvo;
    string expr;
    cin >> alvo >> expr;

    int nums[4];
    char ops[3];
    int ni = 0, oi = 0;

    for (char c : expr) {
        if (isdigit(c)) {
            nums[ni++] = c - '0';
        } else {
            ops[oi++] = c;
        }
    }

    // Verifica se todos operadores são do mesmo grupo
    bool aritmeticos = (ops[0] == '+' || ops[0] == '-');
    for (int i = 1; i < 3; ++i) {
        if (aritmeticos && !(ops[i] == '+' || ops[i] == '-')) {
            cout << "Invalid" << endl;
            return 0;
        }
        if (!aritmeticos && !(ops[i] == '*' || ops[i] == '/')) {
            cout << "Invalid" << endl;
            return 0;
        }
    }

    // Avalia a expressão da esquerda pra direita
    double result = nums[0];
    for (int i = 0; i < 3; ++i) {
        if (ops[i] == '+') result += nums[i + 1];
        else if (ops[i] == '-') result -= nums[i + 1];
        else if (ops[i] == '*') result *= nums[i + 1];
        else if (ops[i] == '/') result /= nums[i + 1];
    }

    // Verifica se resultado é igual ao alvo
    if ((int)result == alvo) cout << "Valid" << endl;
    else cout << "Invalid" << endl;

    return 0;
}
