#ifndef DATO_H_INCLUDED
#define DATO_H_INCLUDED

struct datoStruct;
typedef struct datoStruct * Dato;

Dato crearDato(int num);

void mostrarDato(Dato dato);

#endif // DATO_H_INCLUDED
