#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main() {
    const int N = 8;
    int M[N][N];

    srand(static_cast<unsigned>(time(nullptr)));

    // Заполнение массива случайными числами от -10 до 10
    cout << "Исходный массив M(8, 8):\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            M[i][j] = rand() % 21 - 10; // [-10; 10]
            cout << M[i][j] << "\t";
        }
        cout << "\n";
    }

    // Положительные -> 0, отрицательные -> |значение|
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (M[i][j] > 0)
                M[i][j] = 0;
            else if (M[i][j] < 0)
                M[i][j] = abs(M[i][j]);
        }
    }

    cout << "\nМассив после замены:\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << M[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}
