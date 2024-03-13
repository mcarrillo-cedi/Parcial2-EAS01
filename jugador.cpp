#include "jugador.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

Jugador::Jugador(int vida, int attack): Base(vida, attack, "no definido"){
    this->atacadoPor = nullptr;
}

void Jugador::atacarJugador(Jugador &j2)
{
    atacar(j2);
    j2.atacadoPor = this;
}