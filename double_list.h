
#ifndef DOUBLE_LIST_H
#define DOUBLE_LIST_H


typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;


typedef struct DoubleList {
    Node* head;
    Node* tail;
} DoubleList;


DoubleList* crear_lista();
void insertar_en_inicio(DoubleList* list, int data);
void insertar_en_final(DoubleList* list, int data);
void insertar_en_posicion(DoubleList* list, int data, int posicion);
void eliminar_nodo(DoubleList* list, int data);
Node* buscar(DoubleList* list, int data);
void imprimir_lista_delante(DoubleList* list);
void imprimir_lista_atras(DoubleList* list);
void liberar_lista(DoubleList* list);


#endif

