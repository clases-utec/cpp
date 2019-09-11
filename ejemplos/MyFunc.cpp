//
// Created by jalvarador on 11/09/2019.
//

#include "MyFunc.h"
#include "tipos.h"
void Convertir(l_enteros segundos, enteros &horas, enteros &minutos, enteros &seg){
    horas = segundos / 3600;
    segundos = segundos % 3600;
    minutos = segundos / 60;
    seg = segundos % 60;
}
