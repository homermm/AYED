#include <stdio.h>
#include <stdlib.h>
#include "dato.h"
#include "cola.h"

struct nodoStruct{
    Dato dato;
    Nodo prox;
};

struct colaStruct{
    Nodo primero;
};

Nodo crearNodo(Dato dato){
    Nodo nodo = malloc(sizeof(struct nodoStruct));

    nodo->dato = dato;
    nodo->prox = NULL;

    return nodo;
}

Cola crearCola(){
    Cola cola = malloc(sizeof(struct colaStruct));

    cola->primero = NULL;

    return cola;
}

void encolar(Cola cola, Dato dato){
    Nodo nodo = crearNodo(dato);

    if (cola->primero == NULL){
        cola->primero = nodo;
    }else{
        Nodo aux = getUltimoNodo(cola);
        aux->prox = nodo;
    }

}

Nodo getUltimoNodo(Cola cola){
    Nodo nodo = cola->primero;

    while(nodo->prox != NULL){
        nodo = nodo->prox;
    }

    return nodo;
}

void mostrarCola(Cola cola){
    Nodo nodo = cola->primero;
    while(nodo != NULL){
        mostrarDato(nodo->dato);
        nodo = nodo->prox;
    }
}

void desencolar(Cola cola){
    Nodo nodo = cola->primero;
    cola->primero = nodo->prox;
    free(nodo);
}

void vaciarCola(Cola cola){
    while(cola->primero != NULL){
        desencolar(cola);
    }
}
