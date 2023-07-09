#include <stdio.h>
#include <stdlib.h>
#include "dato.h"
#include "pila.h"

int main()
{
    Pila pila = crearPila();
    Dato dato1 = crearDato(1);
    Dato dato2 = crearDato(2);
    Dato dato3 = crearDato(3);
    Dato dato4 = crearDato(4);

    apilar(pila,dato1);
    apilar(pila,dato2);
    apilar(pila,dato3);
    apilar(pila,dato4);

    mostrarPila(pila);

    printf("\nDesapilo\n");
    desapilar(pila);
    mostrarPila(pila);

    printf("\nVacio la pila\n");
    vaciarPila(pila);
    mostrarPila(pila);
    free(pila);

    return 0;
}
