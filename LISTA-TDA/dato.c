#include <stdio.h>
#include <stdlib.h>
#include "animal.h"
#include "dato.h"

Dato crearDato(Animal animal){

    Dato dato = malloc(sizeof(struct datoStruct));

    dato->animal = animal;

    return dato;
}
