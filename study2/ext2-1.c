#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct animal {
    char * type;
    char * voice;
} animal;

void printAnimal(struct animal * an) {
    printf("type => %s\n", an->type);
    printf("voice => %s\n", an->voice);
}

int main() {
    
    struct animal * tama = (struct animal *) malloc (sizeof(struct animal));
    tama->type = (char *) malloc (1024);
    tama->voice = (char *) malloc (1024);
    strcpy((*tama).type, "cat");
    strcpy((*tama).voice, "meow");
    
    printAnimal(tama);

    struct animal * pochi = (struct animal *) malloc (sizeof(struct animal));
    pochi->type = (char *) malloc (1024);
    pochi->voice = (char *) malloc (1024);
    strcpy((*pochi).type, "dog");
    strcpy((*pochi).voice, "bowow");
    
    printAnimal(pochi);
}
