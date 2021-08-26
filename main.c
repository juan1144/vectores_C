#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(int argc, char** argv) {
    int tamanio_vec = tamanio(), menu_vec;
    int vec [tamanio_vec];
    inicializando(vec, tamanio_vec);

    do {
        menu_vec = menu();
        switch (menu_vec) {
            case 1:
                asignar(vec, tamanio_vec);
                break;
            case 2:
                mostrar(vec, tamanio_vec);
                break;
            case 3:
                eliminar(vec, tamanio_vec);
                break;
        }
    } while (menu_vec > 0 && menu_vec < 4);

    return (EXIT_SUCCESS);
}

