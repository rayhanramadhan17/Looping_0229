#include <iostream>
#include <ctime>
using namespace std;

int main() {
    int x;

    // Perulangan FOR
    cout << "PERULANGAN FOR" << endl;
    for (int i = 0; i <= 4; i++) {
        cout << "Teknologi Informasi UMY" << endl;
    }
    cout << endl;

        // Random angka
    srand(time(0));

    // Perulangan WHILE
    cout << "PERULANGAN WHILE" << endl;
    x = 1 + rand() % 10;

    while (x <= 5) {
        cout << "Bilangan acak = " << x << endl;
        x = rand() % 10;
    }

    cout << "Bilangan acak while yang terakhir = " << x << endl;
    cout << endl;

    // Perulangan DO-WHILE
    cout << "PERULANGAN DO-WHILE" << endl;
    x = 1 + rand() % 10;

    do {
        cout << "Bilangan acak = " << x << endl;
        x = rand() % 10;
    } while (x <= 5);

    cout << "Bilangan acak do-while yang terakhir = " << x << endl;

    return 0;
}