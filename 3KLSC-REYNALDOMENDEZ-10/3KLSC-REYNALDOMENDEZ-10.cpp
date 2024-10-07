// 3KLSC-REYNALDOMENDEZ-10.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
using namespace std;

int sumaRecursiva(int n) {
    if (n <= 9)
        return n;
    else
        return sumaRecursiva(n / 10) + n % 10;
}

int sumaIterativa(int n) {
    int suma = 0;
    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}

int main() {
    int numero, opcion;

    cout << "Seleccione una opción:" << endl;
    cout << "1. Suma iterativa" << endl;
    cout << "2. Suma recursiva" << endl;
    cout << "Opción: ";
    cin >> opcion;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    int resultado;
    switch (opcion) {
    case 1:
        resultado = sumaIterativa(numero);
        cout << "La suma de los dígitos de " << numero << " (método iterativo) es: " << resultado << endl;
        break;
    case 2:
        resultado = sumaRecursiva(numero);
        cout << "La suma de los dígitos de " << numero << " (método recursivo) es: " << resultado << endl;
        break;
    default:
        cout << "Opción no válida." << endl;
        break;
    }

    return 0;
}