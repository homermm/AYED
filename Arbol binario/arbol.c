#include <stdio.h>
#include <stdlib.h>
#include "arbol.h"

struct nodoStruct{

    int dato;
    Nodo izquierdo;
    Nodo derecho;
};

///CREAR E INSERTAR
Nodo crearNodo(int dato){

    Nodo nodo = malloc(sizeof(struct nodoStruct));
    nodo->dato = dato;
    nodo->izquierdo = nodo->derecho = NULL;

    return nodo;
}

void insertar(Nodo nodo, int dato){

    if (dato > nodo->dato){
        if(nodo->derecho == NULL){
            nodo->derecho = crearNodo(dato);
        }else{
            insertar(nodo->derecho, dato);
        }

    }else{
        if(nodo->izquierdo == NULL){
            nodo->izquierdo = crearNodo(dato);
        }else{
            insertar(nodo->izquierdo, dato);
        }
    }

}

///MOSTRAR
void preOrden(Nodo nodo){

    if (nodo != NULL){
        printf(" -%d- ", nodo->dato);
        preOrden(nodo->izquierdo);
        preOrden(nodo->derecho);
    }
}

void inOrden(Nodo nodo){

    if(nodo != NULL){
        inOrden(nodo->izquierdo);
        printf(" -%d- ", nodo->dato);
        inOrden(nodo->derecho);
    }
}

void postOrden(Nodo nodo){

    if (nodo != NULL){
        postOrden(nodo->izquierdo);
        postOrden(nodo->derecho);
        printf(" -%d- ", nodo->dato);
    }

}

Nodo buscar(Nodo nodo, int dato){
    if (nodo == NULL){
        return NULL;
    }

    if (nodo->dato == dato){
        return nodo;
    }

    if (dato > nodo->dato){
        return buscar(nodo->derecho, dato);
    }else{
        return buscar(nodo->izquierdo, dato);
    }
}
