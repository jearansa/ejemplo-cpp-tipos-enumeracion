
#include <iostream>
#include "Day.h"
#include "Color.h"

using namespace std;


// Ejemplo de uso de los tipos por enumeración.

int main() {


    // Uso de tipos "enum class"
    // Atención a cómo accedemos los valores, con el nombre del tipo delante (Color::Red, Color::Blue...)
    Color c1 = Color::Red;
    Color c2 = Color::Blue;

    // Uso de tipos "enum"; recuerda que recomendamos el uso de "enum class".
    // Observa que aquí no usamos el nombre del tipo por delante del valor enumerado
    Day d1 = Monday;
    Day d2 = Tuesday;


    // Ahora comprobamos si funciona la definición que del operador "op <<"
    // hemos hecho en los ficheros "Color.h" y "Day.h":

    cout << "Mostramos el color c1: " << c1 << endl;
    cout << "Mostramos el color c2: " << c2 << endl;

    cout << d1 << endl;
    cout << d2 << endl;

    return 0;
}