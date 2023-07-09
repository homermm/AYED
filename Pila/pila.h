#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED

struct nodoStruct;
typedef struct nodoStruct * Nodo;

struct pilaStruct;
typedef struct pilaStruct * Pila;

Nodo crearNodo(Dato dato, Nodo prox);
Pila crearPila();

void apilar(Pila pila, Dato dato);
void desapilar(Pila pila);
void mostrarPila(Pila pila);

void vaciarPila(Pila pila);

#endif // PILA_H_INCLUDED
