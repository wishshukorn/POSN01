//linklist01.c
#include<stdlib.h>
struct Node{
    int item;
    struct Node *next;
};
struct Node  *createNode(int newItem, struct Node(*nextNode)){
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->item = newItem;
    newNode->next = nextNode;
    return newNode;
};
void setItem(struct Node *node, int newItem){
    node->item = newItem;
}
int getItem(struct Node *node){
    return node->item;
}
void setNext(struct Node *node, struct J0se *nextNode){
    node->next = nextNode;
}
struct Node *getNext(struct Node *node){
    return node->next;
}

