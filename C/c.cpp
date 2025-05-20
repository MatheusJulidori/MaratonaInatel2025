#include <iostream>
using namespace std;

int main() {
    int L, C, T;
    cin >> L >> C >> T;

    char campo[L][C];
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            cin >> campo[i][j];
        }
    }

    for (int i = 0; i < T; i++) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;

        if (campo[x][y] == '#') {
            cout << "voce perdeu" << endl;
            return 0;
        }

        int bombas = 0;

        for (int dx = -1; dx <= 1; dx++) {
            for (int dy = -1; dy <= 1; dy++) {
                int nx = x + dx;
                int ny = y + dy;

                if (nx >= 0 && nx < L && ny >= 0 && ny < C) {
                    if (campo[nx][ny] == '#') {
                        bombas++;
                    }
                }
            }
        }

        cout << bombas << endl;
    }

    return 0;
}
