//#🧪 Ejercicio para ti (nivel principiante)

//Crea un programa que:

//Pida el nombre

//Pida el año de nacimiento

//Muestre:

//Hola Juan, naciste en 2003

#include <iostream>
#include <string>
using namespace std;

int main() {
    int mesNacimiento;
    int añoNacimiento;
    string nombre;

    cout << "mes: ";
    cin >> mesNacimiento;
    cin.ignore();  // 🔴 MUY IMPORTANTE

    cout << "año: ";
    cin >> añoNacimiento;
    cin.ignore();  // 🔴 MUY IMPORTANTE

    cout << "Nombre completo: ";
    getline(cin, nombre);

    cout << nombre << " naciste en " << añoNacimiento << " en el mes de " << mesNacimiento << endl;
    return 0;
}
