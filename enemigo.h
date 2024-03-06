#ifndef enemigo_h
#define enemigo_h

#include "jugador.h"

class Enemigo
{
public:
    int vida, attack;
    string nombre;

    Enemigo();
    Enemigo(int vida, int attack, string nombre);

    void atacarJugador(Jugador &j2);
};

#endif