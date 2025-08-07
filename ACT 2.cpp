/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// CHRISTIAN GABRIEL MELENDEZ CADENA 03 DE AGOSTO DEL 2025 SEGUNDA ACTIVIDAD //
#include <iostream>
using namespace std;

int main() {
    // Declaración de variables
    float num1, num2;
    float suma, resta, multiplicacion, division;

    // Entrada de datos
    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    // Operaciones básicas
    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;

    // Validación para evitar división entre cero
    if (num2 != 0) {
        division = num1 / num2;
    } else {
        cout << "No es posible dividir entre cero." << endl;
    }

    // Resultados
    cout << "\n--- Resultados ---" << endl;
    cout << "Suma: " << suma << endl;
    cout << "Resta: " << resta << endl;
    cout << "Multiplicación: " << multiplicacion << endl;

    if (num2 != 0) {
        cout << "División: " << division << endl;
    }

    return 0;
}