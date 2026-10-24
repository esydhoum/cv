#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Введите целое число (1–999): ";
    cin >> n;

    if (n < 1 || n > 999) {
        cout << "Число должно быть в диапазоне 1–999.\n";
        return 1;
    }

    string parity = (n % 2 == 0) ? "четное" : "нечетное";

    string digits;
    if (n < 10)
        digits = "однозначное";
    else if (n < 100)
        digits = "двузначное";
    else
        digits = "трехзначное";

    cout << parity << " " << digits << " число\n";
    return 0;
}
