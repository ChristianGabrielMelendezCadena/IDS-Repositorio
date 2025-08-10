

//CHRISTIAN GABRIEL MELENDEZ CADENA 09 DE AGOSTO DEL 2025 ACTIVIDAD 3 RFC//

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class Empleado {
private:
    string nombre, apellidoPaterno, apellidoMaterno, fechaNacimiento;
public:
    void capturarDatos() {
        cout << "Nombre: ";
        getline(cin, nombre);
        cout << "Apellido paterno: ";
        getline(cin, apellidoPaterno);
        cout << "Apellido materno (si no tiene, deja en blanco): ";
        getline(cin, apellidoMaterno);
        cout << "Fecha de nacimiento (dd/mm/aaaa): ";
        getline(cin, fechaNacimiento);
    }

    string obtenerRFC() {
        string rfc = "";

        // Primera letra del apellido paterno
        rfc += toupper(apellidoPaterno[0]);

        // Primera vocal interna del apellido paterno
        bool vocalEncontrada = false;
        for (size_t i = 1; i < apellidoPaterno.length(); i++) {
            char c = toupper(apellidoPaterno[i]);
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                rfc += c;
                vocalEncontrada = true;
                break;
            }
        }
        if (!vocalEncontrada) rfc += 'X';

        // Inicial del apellido materno o X si no hay
        rfc += apellidoMaterno.empty() ? 'X' : toupper(apellidoMaterno[0]);

        // Inicial del primer nombre
        char inicialNombre = toupper(nombre[0]);
        if (inicialNombre == 'J' && nombre.substr(0, 5) == "Jesus") inicialNombre = 'X'; // Censura automática
        rfc += inicialNombre;

        // Separar fecha
        string dia = fechaNacimiento.substr(0, 2);
        string mes = fechaNacimiento.substr(3, 2);
        string anio = fechaNacimiento.substr(6, 4);

        rfc += anio.substr(2, 2); // últimos dos del año
        rfc += mes;
        rfc += dia;

        // Homoclave no se genera
        rfc += "XXX";

        return rfc;
    }
};

int main() {
    Empleado e;
    e.capturarDatos();
    cout << "RFC generado (sin homoclave): " << e.obtenerRFC() << endl;
    return 0;
}
