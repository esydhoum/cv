#include <iostream>
using namespace std;

struct Center {
    double x; // координата X
    double y; // координата Y
};

struct Circle {
    double radius; // радиус
    Center center; // центр
};

int main() {
    const int COUNT = 10;
    Circle circles[COUNT];
    double sumRadius = 0.0;

    cout << "Введите данные для " << COUNT << " окружностей:\n";
    for (int i = 0; i < COUNT; i++) {
        cout << "\nОкружность " << (i + 1) << ":\n";
        cout << "  Радиус: ";
        cin >> circles[i].radius;
        cout << "  Координата X центра: ";
        cin >> circles[i].center.x;
        cout << "  Координата Y центра: ";
        cin >> circles[i].center.y;
        sumRadius += circles[i].radius;
    }

    double avgRadius = sumRadius / COUNT;
    cout << "\nСредний радиус всех окружностей: " << avgRadius << "\n";

    cout << "\nЦентры окружностей с радиусом выше среднего:\n";
    bool found = false;
    for (int i = 0; i < COUNT; i++) {
        if (circles[i].radius > avgRadius) {
            cout << "Окружность " << (i + 1)
                 << ": (" << circles[i].center.x
                 << ", " << circles[i].center.y << ")\n";
            found = true;
        }
    }

    if (!found)
        cout << "Таких окружностей нет.\n";

    return 0;
}
