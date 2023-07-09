#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED

struct nodoStruct;
typedef struct nodoStruct * Nodo;

struct colaStruct;
typedef struct colaStruct * Cola;

Nodo crearNodo(Dato dato);

Cola crearCola();
void encolar(Cola cola, Dato dato);
Nodo getUltimoNodo(Cola cola);

void mostrarCola(Cola cola);

#endif // COLA_H_INCLUDED
