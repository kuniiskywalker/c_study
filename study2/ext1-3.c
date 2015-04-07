#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char gstr[15];

void setGlobalString(){
    strcpy(gstr, "This is Global");
}

int main() {
    printf("str => %s\n", gstr);
    setGlobalString();
    printf("str => %s\n", gstr);
}
