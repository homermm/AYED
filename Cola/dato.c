#include <stdio.h>
#include <stdlib.h>
#include "dato.h"
#include "cola.h"

struct datoStruct{
    int num;
};

Dato crearDato(int num){
    Dato dato = malloc(sizeof(struct datoStruct));
    dato->num = num;
    return dato;
}

void mostrarDato(Dato dato){
printf(" -%d- ", dato->num);
}
