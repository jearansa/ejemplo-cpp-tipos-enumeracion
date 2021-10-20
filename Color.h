//
// Created by jearansa on 30/10/2019.
//

#ifndef UNTITLED_COLOR_H
#define UNTITLED_COLOR_H

#include <iostream>

using namespace std;

// Definición de tipos por enumeración por medio de "enum class".

// Atención: para usar luego los valores enumerados, tanto en el main como en funciones  auxiliares,
// se debe usar "Color::Red", "Color::Green"...

enum class Color {Red, Green, Blue};

// Definición del operador "op <<" para que sea capaz de mostrar por pantalla los valores enumerados.
// Para adaptarlo a otros tipos por enumeración, cambiar el tipo del parámetro "Color" y los valores
// de las constantes dentro del switch.

inline ostream & operator << (ostream &out, const Color &d)
{
    switch (d){
        case Color::Red: out << "Red"; break;
        case Color::Green: out << "Green"; break;
        case Color::Blue: out << "Blue"; break;
    }
    out << endl;
    return out;
}

#endif //UNTITLED_COLOR_H
