//
// Created by jearansa on 30/10/2019.
//

#ifndef UNTITLED_DAY_H
#define UNTITLED_DAY_H

#include <iostream>

using namespace std;

// Definición de tipos por enumeración por medio de "enum" (observar la diferencia con "enum class").

// Atención: para usar luego los valores enumerados,
// se debe usar "Color::Red", "Color::Green"...

// Nota: nosotros recomendaremos siempre el uso de "enum class", ver el fichero "Color.h"

enum Day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

inline ostream & operator << (ostream &out, const Day &d)
{
    switch (d){
        case Monday: out << "Monday"; break;
        case Tuesday: out << "Tuesday"; break;
        case Wednesday: out << "Wednesday"; break;
        case Thursday: out << "Thursday"; break;
        case Friday: out << "Friday"; break;
        case Saturday: out << "Saturday"; break;
        case Sunday: out << "Sunday"; break;
    }
    out << endl;
    return out;
}


inline string toString (const Day &d) {
    switch (d){
        case Monday: return "Day::Monday";
        case Tuesday: return "Day::Tuesday";
        case Wednesday: return "Day::Wednesday";
        case Thursday: return "Day::Thursday";
        case Friday: return "Day::Friday";
        case Saturday: return "Day::Saturday";
        case Sunday: return "Day::Sunday";
        default: return "";
    }
}

#endif //UNTITLED_DAY_H