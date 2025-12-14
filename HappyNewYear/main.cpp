#include <iostream>
#include <Windows.h>
using namespace std;

int main() {

    char year[4][5][5] = {
        // Angka 2
        {
            {char(178), char(178), char(178), char(178), char(178)},
            {' ', ' ', ' ', ' ', char(178)},
            {char(178), char(178), char(178), char(178), char(178)},
            {char(178), ' ', ' ', ' ', ' '},
            {char(178), char(178), char(178), char(178), char(178)}
        },
        // Angka 0
        {
            {char(178), char(178), char(178), char(178), char(178)},
            {char(178), ' ', ' ', ' ', char(178)},
            {char(178), ' ', ' ', ' ', char(178)},
            {char(178), ' ', ' ', ' ', char(178)},
            {char(178), char(178), char(178), char(178), char(178)}
        },
        // Angka 2
        {
            {char(178), char(178), char(178), char(178), char(178)},
            {' ', ' ', ' ', ' ', char(178)},
            {char(178), char(178), char(178), char(178), char(178)},
            {char(178), ' ', ' ', ' ', ' '},
            {char(178), char(178), char(178), char(178), char(178)}
        },
        // Angka 6
        {
            {char(178), char(178), char(178), char(178), char(178)},
            {char(178), ' ', ' ', ' ', ' '},
            {char(178), char(178), char(178), char(178), char(178)},
            {char(178), ' ', ' ', ' ', char(178)},
            {char(178), char(178), char(178), char(178), char(178)}
        }
    };

    char greeting[] = "Happy New Year";

    for (int i = 0;greeting[i] != '\0';++i) {
        cout << greeting[i] << flush;
        Sleep(250);
    }

    cout << endl;
    for (int i = 0; i < 5; i++) {
        for (int o = 0; o < 4; o++) {
            for (int j = 0; j < 5; j++) {
                cout << year[o][i][j];
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}