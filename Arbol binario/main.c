#include <stdio.h>
#include <stdlib.h>
#include "arbol.h"

int main()
{
    printf("----- Ejemplo arbol binario ----\n");

    Nodo raiz = crearNodo(28);
    insertar(raiz, 11);
    insertar(raiz, 96);
    insertar(raiz, 21);
    insertar(raiz, 6);
    insertar(raiz, 97);
    insertar(raiz, 1);
    insertar(raiz, 30);
    insertar(raiz, 10);
    insertar(raiz, 2);

    printf("\nImprimiendo preOrden\n");
    preOrden(raiz);
    printf("\nImprimiendo inOrden\n");
    inOrden(raiz);
    printf("\nImprimiendo postOrden\n");
    postOrden(raiz);

    printf("\nBuscando el 30\n");
    Nodo buscado = buscar(raiz, 30);

    if(buscado == NULL){
        printf("No encontrado!!!!!");
    }

    else{

        printf("Encontrado");
    }
    return 0;
}
