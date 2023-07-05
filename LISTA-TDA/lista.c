#include <stdio.h>
#include <stdlib.h>
#include "animal.h"
#include "dato.h"
#include "lista.h"

/// ESTRUCTURAS Y CONSTRUCTORES
struct nodoStruct{
    Dato dato;
    Nodo prox;
};

struct listaStruct{
    Nodo inicio;
};

Nodo crearNodo(Dato dato, Nodo prox){

    Nodo nodo = malloc(sizeof(struct nodoStruct));

    nodo->dato = dato;
    nodo->prox = prox;

    return nodo;
}

Lista crearLista(){

    Lista lista = malloc(sizeof(struct listaStruct));
    lista->inicio = NULL;

    return lista;
}

///INSERTAR
int insertarInicio(Lista lista, Dato dato){

    if (lista == NULL || dato == NULL){
        return -1;
    }
    Nodo nodo = crearNodo(dato, lista->inicio);

    lista->inicio = nodo;

    return 1;
}

int insertar(Lista lista, Dato dato, int pos){

    Nodo aux = getNodoLista(lista, pos-1);

    if (aux == NULL){
        return -1;
    }
    if(pos == 0){
        return insertarInicio(lista,dato);
    }

    Nodo nuevoNodo = crearNodo(dato, aux->prox);
    aux->prox= nuevoNodo;

    return 1;
}

int insertarFin(Lista lista, Dato dato) {
    return insertar(lista, dato, getTamanioLista(lista));
}

///FUNCIONES UTILES
int getTamanioLista(Lista lista){

    int contador = 0;
    Nodo nodo = lista->inicio;

    while (nodo != NULL){
        nodo = nodo->prox;
        contador++;
    }

    return contador;
}

Nodo getNodoLista(Lista lista, int pos){

    Nodo nodo = lista->inicio;

    for (int i=0; i<pos; i++){
        nodo = nodo->prox;
    }

    return nodo;
}

///REMOVER
int removerInicio(Lista lista){

    if (lista->inicio == NULL){
        return -1;
    }

    Nodo nodoAEliminar = lista->inicio;
    lista->inicio = nodoAEliminar->prox;
    free(nodoAEliminar);

    return 1;
}

void vaciarLista(Lista lista){

    while(lista->inicio != NULL){
        removerInicio(lista);
    }
}

///MOSTRAR

void mostrarLista(Lista lista){

    int tam = getTamanioLista(lista);

    for(int i=0; i<tam; i++){
        mostrarAnimal((Animal)getNodoLista(lista, i)->dato);
    }

}


