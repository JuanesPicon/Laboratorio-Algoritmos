#include <iostream>

using namespace std;

// Función para calcular la nota final
float calcularNotaFinal(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

// Función para procesar los datos de un estudiante
void procesarEstudiante(int cod, float& nf, float& snf, int& cp, float& nmayor, float& nmenor) {
    float n1, n2, n3;

    cout << "Codigo: ";
    cin >> cod;
    cout << "Nota 1: ";
    cin >> n1;
    cout << "Nota 2: ";
    cin >> n2;
    cout << "Nota 3: ";
    cin >> n3;

    nf = calcularNotaFinal(n1, n2, n3);
    cout << "Nota final: " << nf <<"\n"<<endl;

    snf = snf + nf;

    if (nf < 3) {
        cp++;
    }

    if (nf > nmayor) {
        nmayor = nf;
    }

    if (nf < nmenor) {
        nmenor = nf;
    }
}


void mostrarResultados(int cp, float snf, int n, float nmayor, float nmenor) {
    cout << "Perdieron: " << cp << endl;
    cout << "Promedio: " << snf / n << endl;
    cout << "Nota mayor: " << nmayor << endl;
    cout << "Nota menor: " << nmenor << endl;
    cout << "Porcentaje ganadores: " << (n - cp) * 100.0 / n << "%"<<endl;
}

int main() {
    int n, cod, cp = 0;
    float n1, n2, n3, nf, snf = 0, nmayor = 0, nmenor = 5; 

    cout << "cantidad: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        procesarEstudiante(cod, nf, snf, cp, nmayor, nmenor);
    }

    mostrarResultados(cp, snf, n, nmayor, nmenor);

    return 0;
}