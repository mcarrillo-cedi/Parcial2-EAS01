#ifndef jugador_h
#define jugador_h

#include "base.h"
#include <string>
using namespace std;

class Jugador: public Base
{
public:
    Jugador *atacadoPor;

    Jugador(): Base()
    {
        this->atacadoPor = nullptr;
    }
    Jugador(int vida, int attack, string nombre): Base(vida, attack, nombre){
        this->atacadoPor = nullptr;
    }
    Jugador(int vida, int attack);

    void atacarJugador(Jugador &j2);
};

#endif