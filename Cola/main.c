#include <stdio.h>
#include <stdlib.h>
#include "dato.h"
#include "cola.h"

int main()
{
    Cola cola = crearCola();
    Dato dato1 = crearDato(1);
    Dato dato2 = crearDato(2);
    Dato dato3 = crearDato(3);
    Dato dato4 = crearDato(4);

    encolar(cola, dato1);
    encolar(cola, dato2);
    encolar(cola, dato3);
    encolar(cola, dato4);

    mostrarCola(cola);

    printf("\nDesencolo\n");
    desencolar(cola);
    mostrarCola(cola);

    printf("\nVacio la cola\n");
    vaciarCola(cola);
    free(cola);

    return 0;
}
