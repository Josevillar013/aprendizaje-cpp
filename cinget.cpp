#include <iostream>
#include <string>
using namespace std;

int main() {
    int edad;
    string nombre;

    cout << "Edad: ";
    cin >> edad;
    cin.ignore();  // 🔴 MUY IMPORTANTE

    cout << "Nombre completo: ";
    getline(cin, nombre);

    cout << nombre << " tiene " << edad << " años" << endl;
    return 0;
}
