#include <stdio.h>

void setTitle(char * title){
    char title2[] = "C Study";
    title = title2;
}

int main(){
    char title[100];
    setTitle(title);
    
    printf("title is %s\n", title);
}
