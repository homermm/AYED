#include <stdio.h>
#include <stdlib.h>
#include "dato.h"
#include "pila.h"

struct nodoStruct{
    Dato dato;
    Nodo prox;
};

struct pilaStruct{
    Nodo primero;
};

Nodo crearNodo(Dato dato, Nodo prox){
    Nodo nodo = malloc(sizeof(struct nodoStruct));

    nodo->dato= dato;
    nodo->prox= prox;

    return nodo;
}

Pila crearPila(){

    Pila pila = malloc(sizeof(struct pilaStruct));

    pila->primero= NULL;

    return pila;
}

void apilar(Pila pila, Dato dato){

    Nodo nodo = crearNodo(dato, pila->primero);
    pila->primero = nodo;
}

void desapilar(Pila pila){

    Nodo nodo = pila->primero;
    pila->primero = nodo->prox;
    free(nodo);
}

void mostrarPila(Pila pila){
    Nodo nodo = pila->primero;
    while (nodo != NULL){
        mostrarDato(nodo->dato);
        nodo = nodo->prox;
    }
}

void vaciarPila(Pila pila){
    while (pila->primero != NULL){
        desapilar(pila);
    }
}
