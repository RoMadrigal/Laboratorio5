
#include <stdio.h>
#include <stdlib.h>
#include "double_list.h"


DoubleList* crear_lista() {
    DoubleList* list = (DoubleList*)malloc(sizeof(DoubleList));
    list->head = NULL;
    list->tail = NULL;
    return list;
}

void insertar_en_inicio(DoubleList* list, int data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = list->head;
    new_node->prev = NULL;
    if (list->head != NULL) {
        list->head->prev = new_node;
    }
    list->head = new_node;
    if (list->tail == NULL) {
        list->tail = new_node;
    }
}


void insertar_en_final(DoubleList* list, int data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;
    new_node->prev = list->tail;
    if (list->tail != NULL) {
        list->tail->next = new_node;
    }
    list->tail = new_node;
    if (list->head == NULL) {
        list->head = new_node;
    }
}


void insertar_en_posicion(DoubleList* list, int data, int posicion) {
    if (position == 0) {
        insert_at_beginning(list, data);
        return;
    }



    Node* current = list->head;
    for (int i = 0; i < position - 1 && current != NULL; i++) {
        current = current->next;
    }


    if (current == NULL || current->next == NULL) {
        insert_at_end(list, data);
    } else {
        Node* new_node = (Node*)malloc(sizeof(Node));
        new_node->data = data;
        new_node->next = current->next;
        new_node->prev = current;
        current->next->prev = new_node;
        current->next = new_node;
    }
}


void eliminar_nodo(DoubleList* list, int data) {
    Node* current = list->head;
    while (current != NULL && current->data != data) {
        current = current->next;
    }


    if (current == NULL) {
        return;
    }


    if (current->prev != NULL) {
        current->prev->next = current->next;
    } else {
        list->head = current->next;
    }


    if (current->next != NULL) {
        current->next->prev = current->prev;
    } else {
        list->tail = current->prev;
    }


    free(current);
}



Node* buscar(DoubleList* list, int data) {
    Node* current = list->head;
    while (current != NULL && current->data != data) {
        current = current->next;
    }
    return current;
}


void imprimir_lista_delante(DoubleList* list) {
    Node* current = list->head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}


void imprimir_lista_atras(DoubleList* list) {
    Node* current = list->tail;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->prev;
    }
    printf("\n");
}


void liberar_lista(DoubleList* list) {
    Node* current = list->head;
    Node* next_node;
    while (current != NULL) {
        next_node = current->next;
        free(current);
        current = next_node;
    }
    free(list);
}


