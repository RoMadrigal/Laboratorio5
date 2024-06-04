
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


