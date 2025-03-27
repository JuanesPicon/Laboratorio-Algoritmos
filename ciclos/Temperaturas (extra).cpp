#include <iostream>

using namespace std;
int n, i, con;
float tem, suma;


int main(int argc, char** argv) {
    cout << "Escriba cuantas muestras se tomaron: ";
    cin >> n;

    i = 1, con = 0, suma = 0;
    while (i <= n) {
        cout << "Escriba la temperatura "<< i<<": ";
        cin >> tem;
        if (tem > 20) {
            suma = suma + tem;
            con = con + 1;
        }
        i = i + 1;
    }

    cout << "El promedio de las temperaturas mayores a 20 es: " << suma / con;
    if (con == 0) {
        cout << "ninguna temperatura fue superior a 20";
    }
    return 0;
}