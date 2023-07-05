#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED

struct animalStruct;
typedef struct animalStruct * Animal;

Animal crearAnimal(char tipo[20], char subtipo[20], char nombre[20], float peso, int edad, char sexo);

void mostrarAnimal(Animal animal);

#endif // ANIMAL_H_INCLUDED
