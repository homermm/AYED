#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

struct nodoStruct;
typedef struct nodoStruct * Nodo;

struct listaStruct;
typedef struct listaStruct * Lista;

Nodo crearNodo(Dato dato, Nodo prox);

int insertarInicio(Lista lista, Dato dato);

int insertar(Lista lista, Dato dato, int pos);

int insertarFin(Lista lista, Dato dato);

int getTamanioLista(Lista lista);

Nodo getNodoLista(Lista lista, int pos);

int removerInicio(Lista lista);

void vaciarLista(Lista lista);

void mostrarLista(Lista lista);

#endif // LISTA_H_INCLUDED
