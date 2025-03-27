#include <iostream>

using namespace std;
 int opcion;
    double valor, resultado;
int main(int argc, char** argv)  {
   
        cout << "\n--- Conversor de Unidades ---" << endl;
        cout << "1. Celsius a Fahrenheit" << endl;
        cout << "2. Fahrenheit a Celsius" << endl;
        cout << "3. Kilometros a Millas" << endl;
        cout << "4. Millas a Kilometros" << endl;
        cout << "5. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 4) {
            cout << "Ingrese el valor a convertir: ";
            cin >> valor;

            switch (opcion) {
                case 1: // Celsius a Fahrenheit
                    resultado = (valor * 9.0 / 5.0) + 32.0;
                    cout << valor << " Celsius son " << (int)(resultado * 100) / 100.0 << " Fahrenheit." << endl;
                    break;
                case 2: // Fahrenheit a Celsius
                    resultado = (valor - 32.0) * 5.0 / 9.0;
                    cout << valor << " Fahrenheit son " << (int)(resultado * 100) / 100.0 << " Celsius." << endl;
                    break;
                case 3: // Kilometros a Millas
                    resultado = valor * 0.621371;
                    cout << valor << " Kilometros son " << (int)(resultado * 100) / 100.0 << " Millas." << endl;
                    break;
                case 4: // Millas a Kilometros
                    resultado = valor * 1.60934;
                    cout << valor << " Millas son " << (int)(resultado * 100) / 100.0 << " Kilometros." << endl;
                    break;
            }
        } else if (opcion == 5) {
            cout << "Saliendo del programa..." << endl;
        } else {
            cout << "Opcion invalida. Intente de nuevo." << endl;
        }


    return 0;
}
