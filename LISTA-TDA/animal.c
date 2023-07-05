#include <stdio.h>
#include <stdlib.h>
#include "animal.h"
#include "dato.h"
#include "lista.h"

struct animalStruct{

    char tipo[20];
    char subtipo[20];
    char nombre[20];
    float peso;
    int edad;
    char sexo;
};

Animal crearAnimal(char tipo[20], char subtipo[20], char nombre[20], float peso, int edad, char sexo){

    Animal animal = malloc(sizeof(struct animalStruct));

    strcpy(animal->tipo, tipo);
    strcpy(animal->subtipo, subtipo);
    strcpy(animal->nombre, nombre);
    animal->peso= peso;
    animal->edad= edad;
    animal->sexo= sexo;

    return animal;
}

void mostrarAnimal(Animal animal){

printf("\n----ANIMAL----\n");
printf("TIPO: %s\n", animal->tipo);
printf("SUBTIPO: %s\n", animal->subtipo);
printf("NOMBRE: %s\n", animal->nombre);
printf("PESO: %f\n", animal->peso);
printf("EDAD: %d\n", animal->edad);
printf("SEXO: %c\n", animal->sexo);

}
