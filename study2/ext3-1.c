#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct linkedList {
    int value;
    struct linkedList * next;
} linkedList;

struct linkedList * createList(int value){
    
    struct linkedList * list = (struct linkedList *) malloc (sizeof(struct linkedList));
    list->value = value;
    list->next = NULL;

    return list;
}

void addList(struct linkedList * list, int value){
    
    struct linkedList * current;
    current = list;
    while(current->next != NULL) {
        current = current->next;
    }
    current->next = createList(value);
}

void printList(struct linkedList * list){
    struct linkedList * current;
    current = list;
    while(1) {
        printf("value = %d\n", current->value);
        if (current->next == NULL){
            break;
        }
        current = current->next;
    }
}

int main() {
    
    struct linkedList * list = createList(15);
    addList(list, 22); 
    addList(list, 5);
    addList(list, 8);

    printList(list); 
}
