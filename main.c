
#include <stdio.h>
#include "double_list.h"


int main() {
    DoubleList* list = crear_lista();


    insertar_en_inicio(list, 10);
    insertar_en_final(list, 20);
    insertar_en_posicion(list, 15, 1);
    imprimir_lista_delante(list);
    imprimir_lista_atras(list);

    eliminar_nodo(list, 15);
    imprimir_lista_delante(list);


    Node* found = buscar(list, 20);
    if (found != NULL) {
        printf("Elemento encontrado: %d\n", found->data);
    } else {
        printf("Elemento no encontrado\n");
    }


    liberar_lista(list);


    return 0;
}

