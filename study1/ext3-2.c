#include <stdio.h>

void add(int *a){
    *a = *a + 3;
}

int main(){
    int a = 1;
    add(&a);
    printf("a => %d\n", a);
}
