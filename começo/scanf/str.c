#include <stdio.h>
int main(){
    char c[10];
    printf("Digite nome de uma empresa");
/*
Using string with scanf
*/
    scanf("%s", c);
    printf("\nVocê digitou %s", c);

    return 0;
}