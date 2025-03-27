#include <iostream>
using namespace std;

int main() {
    char letra;

    cout << "Ingrese una letra: ";
    cin >> letra;

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        cout << "Es una vocal." << endl;
    } else {
        cout << "Es una consonante." << endl;
    }

    return 0;
}