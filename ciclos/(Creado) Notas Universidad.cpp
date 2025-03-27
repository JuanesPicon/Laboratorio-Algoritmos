#include <iostream>

using namespace std;

int main(int argc, char** argv)  {
    int numCalificaciones, numQuizzes;
    float parcial1, parcial2;
    float calificacion, quiz;
    float sumaCalificaciones = 0, sumaQuizzes = 0;
    float porcCalificaciones, porcParciales, porcQuizzes;

 
    cout << "Ingrese el porcentaje de para calificaciones normales (talleres, etc.): ";
    cin >> porcCalificaciones;
    cout << "Ingrese el porcentaje de los parciales (en total): ";
    cin >> porcParciales;
    cout << "Ingrese el porcentaje de peso para quizzes: ";
    cin >> porcQuizzes;

    if (porcCalificaciones + porcParciales + porcQuizzes != 100) {
        cout << "Error: La suma de los porcentajes debe ser 100." << endl;
        return 1; // Salir con codigo de error
    }

    porcCalificaciones = porcCalificaciones / 100.0;
    porcParciales = porcParciales / 100.0;
    porcQuizzes = porcQuizzes / 100.0;

    cout << "Ingrese el numero de calificaciones normales (talleres, etc.): ";
    cin >> numCalificaciones;

    for (int i = 0; i < numCalificaciones; i = i + 1) {
        cout << "Ingrese la calificacion " << i + 1 << ": ";
        cin >> calificacion;
        sumaCalificaciones = sumaCalificaciones + calificacion;
    }

    cout << "Ingrese la calificacion del parcial 1: ";
    cin >> parcial1;

    cout << "Ingrese la calificacion del parcial 2: ";
    cin >> parcial2;

    cout << "Ingrese el numero de quizzes: ";
    cin >> numQuizzes;

    for (int i = 0; i < numQuizzes; i = i + 1) {
        cout << "Ingrese la calificacion del quiz " << i + 1 << ": ";
        cin >> quiz;
        sumaQuizzes = sumaQuizzes + quiz;
    }

    float promedioCalificaciones = sumaCalificaciones / numCalificaciones;
    float promedioQuizzes = sumaQuizzes / numQuizzes;

    float notaFinal = (promedioCalificaciones * porcCalificaciones) + 
                       ((parcial1 + parcial2) / 2 * porcParciales) + 
                       (promedioQuizzes * porcQuizzes);

    cout << "Tu nota final es: " << notaFinal << endl;

    if (notaFinal < 3.0) {
        cout << "Perdiste la materia :(." << endl;
    } else {
        cout << "Ganaste la materia :)" << endl;
    }

    return 0;
}
