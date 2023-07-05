#include <stdio.h>
#include <stdlib.h>
#include "animal.h"
#include "dato.h"
#include "lista.h"

int main()
{
    Animal animal1 = crearAnimal("1", "1", "1", 1, 1, 'm');
    Animal animal2 = crearAnimal("2", "2", "2", 2, 2, 'm');
    Animal animal3 = crearAnimal("3", "3", "3", 3, 3, 'm');
    Animal animalInicio = crearAnimal("inicio", "inicio", "inicio", 1, 1, 'm');
    Animal animalFinal = crearAnimal("final", "final", "final", 1, 1, 'm');

    Lista lista = crearLista();

    insertarInicio(lista,animal1);
    insertarInicio(lista,animal2);
    insertarInicio(lista,animalInicio);

    insertar(lista, animal3, 1);

    insertarFin(lista, animalFinal);

    mostrarLista(lista);
    return 0;
}
