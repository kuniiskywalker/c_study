#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * getString() {
    char * str;
    str = (char *) malloc (sizeof(char) * 8 );
    strcpy(str, "abcdefg");
    
    return str; 
}

int main() {
    char * str;
    str = getString();
    printf("str => %s\n", str);
    free(str);
    printf("str => %s\n", str);
}
