#include <iostream>

using namespace std;

int main() {
    double base, altura, area;

    // Solicitar la base y la altura al usuario
    cout << "Ingrese la base del rectangulo: ";
    cin >> base;

    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;

    // Calcular el área
    area = base * altura;

    // Mostrar el área
    cout << "El area del rectangulo es: " << area << endl;

    return 0;
}