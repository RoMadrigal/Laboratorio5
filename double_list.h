
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

