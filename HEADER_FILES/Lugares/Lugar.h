/*

Archivo: Rio.h
Autor:
Calderón Prieto Brandon
<bcalderonprieto@gmail.com>
Fecha Creación: 2022-01-29
Fecha Ultima Modificación: 2022-03-19
Licencia: GNU-GPL

*/


/**
Clase: Lugar
Responsabilidad: Representar cada uno de los lugares del juego y su funcionamiento
Relaciones:
- Conoce a  Personajes (Zorro, Conejo, Lechuga y Robot.h)
*/

#pragma once
#ifndef LUGAR_H
#define LUGAR_H
#include <iostream>
#include "../Personajes/Personaje.h"
#include "../Personajes/EXTENDS_FROM_PERSONAJE/Conejo.h"
#include "../Personajes/EXTENDS_FROM_PERSONAJE/Zorro.h"
#include "../Personajes/EXTENDS_FROM_PERSONAJE/Robot.h"
#include "../Personajes/EXTENDS_FROM_PERSONAJE/Lechuga.h"
using namespace std;

class Lugar
{
protected:
    Personaje **personajes;// Puntero tipo puntero de personajes, para hacer un array dinamico
    int numPersonajes;
    string nombre;
public:
    Lugar(int _numPersonajes);
    ~Lugar();
    string getNombre();
    void addPersonaje(int indice, Personaje* personaje);
    Personaje* getPersonaje(int indice);
    int getNumPersonajes();
    void removerPersonaje(int indice);
    bool alguienFueComido();
    virtual bool movimientoPermitido();
    virtual bool lleno();
    virtual bool alguienCayoAlRio(); // Se tiene que definir aquí porque se van a menejar
    // listas con punteros de Lugar, asi que todos los metodos tienen que estar en esta clase
};

#else
class Lugar;
#endif
