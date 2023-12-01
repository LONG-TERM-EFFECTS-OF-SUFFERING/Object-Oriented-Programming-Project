/*

Archivo: Tablero.h
Autor:
Getial Getial Juan Sebastian
<getial.juan@correounivalle.edu.co>
Fecha Creación: 2022-03-19
Fecha Ultima Modificación: 2022-03-19
Licencia: GNU-GPL

*/

/**
Clase: Tablero
Responsabilidad: Representar el funcionamiento del Tablero en el juego
Relaciones:
- Conoce a Lugares
*/

#pragma once
#ifndef TABLERO_H
#define TABLERO_H
#include "Lugares/Lugar.h"
#include "Lugares/EXTENDS_FROM_LUGAR/Orilla.h"
#include "Lugares/EXTENDS_FROM_LUGAR/Barca.h"
#include "Lugares/EXTENDS_FROM_LUGAR/Meta.h"
#include "Lugares/EXTENDS_FROM_LUGAR/Rio.h"
#include <vector>

using namespace std;

class Tablero
{
private:
    Lugar *lugares[4]; // Tablero o matriz
    vector<string> idsPersonajes;
    vector<string> nombresPersonajes;

public:
    Tablero(int numPersonajes);
    ~Tablero();
    void dibujarTablero();
    void setPersonajeEnLugar(int cualLugar, int indice, Personaje *personaje);
    void setIdsPersonajes();
    void setNombresPersonajes();
    void mostrarIdsPersonajes();
    void moverPersonaje(string idPersonaje);
    void moverBarca();
    string estadoDelJuego();
};

#else
class Tablero;
#endif