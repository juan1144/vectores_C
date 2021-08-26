#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int tamanio() {
    int tam;
    do {
        printf("Cual es el tamaño que desea que tenga el vector (recuerda que solo es de 5 a 30)\n");
        scanf("%i", &tam);
    } while (tam < 5 || tam > 30);
    return tam;
}

void inicializando(int vec[], int tamanio) {
    for (int i = 0; i < tamanio; i++) {
        vec[i] = 0;
    }
}

int menu() {
    int menu;
    printf("1.Asignar un asiento\n2.mostrar asientos\n3.Desocupar un asiento\nCualquier otro numero para salir\n");
    scanf("%i", &menu);
    return menu;
}

void asignar(int vec[], int tamanio) {
    int puesto;
    do {
        printf("\nQue puesto desea asignar el numero uno?-->");
        scanf("%i", &puesto);
    } while (puesto < 1 || puesto > tamanio);

    if (vec[(puesto - 1)] == 0) {
        printf("\nya se le asigno el puesto #%i \n\n", puesto);
        vec[puesto - 1] = 1;
    } else {
        printf("\nSorry su puesto %i ya esta asignado a alguien mas\n", puesto);
    }
}

void mostrar(int vec[], int tamanio) {
    printf("\n");
    for (int i = 0; i < tamanio; i++) {
        printf("%i\n", vec[i]);
    }
    printf("\n");
}

void eliminar(int vec[], int tamanio) {
    int puesto;
    do {
        printf("\nQue puesto desea borrar al arreglo (arrays)?-->");
        scanf("%i", &puesto);
    } while (puesto < 1 || puesto > tamanio);

    if (vec[(puesto - 1)] == 1) {
        printf("\nya se borro el puesto %i en al arreglo (arrays) \n", puesto);
        vec[puesto -1] = 0;
    } else {
        printf("\nSorry su puesto %i nunca a sido asignado, crack\n", puesto);
    }
}