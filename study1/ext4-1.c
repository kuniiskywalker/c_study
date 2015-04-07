#include <stdio.h>

int main(){
    char str[5] = "abcd";
    printf("str[0] => %c\n", str[0]);
    printf("str[1] => %c\n", str[1]);
    printf("str[2] => %c\n", str[2]);
    printf("str[3] => %c\n", str[3]);

    char * is = str;
    printf("str[0] => %c\n", *is);
    printf("str[1] => %c\n", *(is+1));
    printf("str[2] => %c\n", *(is+2));
    printf("str[3] => %c\n", *(is+3));
}
