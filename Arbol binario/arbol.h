#ifndef ARBOL_H_INCLUDED
#define ARBOL_H_INCLUDED

struct nodoStruct;

typedef struct nodoStruct * Nodo;

Nodo crearNodo(int dato);

void insertar(Nodo nodo, int dato);

void preOrden(Nodo nodo);

void inOrden(Nodo nodo);

void postOrden(Nodo nodo);

Nodo buscar(Nodo nodo, int dato);
#endif // ARBOL_H_INCLUDED
