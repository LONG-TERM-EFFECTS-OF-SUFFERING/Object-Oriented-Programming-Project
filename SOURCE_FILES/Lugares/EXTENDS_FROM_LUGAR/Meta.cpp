/*

Archivo: Meta.cpp
Autor:
Calderón Prieto Brandon
<bcalderonprieto@gmail.com>
Fecha Creación: 2022-01-29
Fecha Ultima Modificación: 2022-03-20
Licencia: GNU-GPL

*/

#include "../../../HEADER_FILES/Lugares/EXTENDS_FROM_LUGAR/Meta.h"
#include <iostream>
using namespace std;

Meta::Meta(int _numPersonajes) : Lugar(_numPersonajes)
{
    nombre = "Meta";
}

Meta::~Meta()
{
}