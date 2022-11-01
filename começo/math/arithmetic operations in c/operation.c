#include <stdio.h>
#include <math.h>

int main(){
    int a =10, b =2;
    char m = 'A', n ='a';

    printf("\nOperações aritmeticas");
    printf("\nAdição de a e b %d\n", (a+b));
    
    printf("\nSubtração de a e b é %d\n", (a -b));
    printf("\nSubtração de b e a é %d\n", (b - a));
    
    printf("\nMultiplicação de a e b é %d\n", (a*b)); 
    printf("\nDivisão %d\n", (a/b));
    printf("\nDivisão Modular de a e b é %d\n", (a%b));
    printf("\n3 para a potência de 2 é", pow(3,2));
    printf("\nAssic valor de A e a é %d e %d\n\n", m,n);
    
    return 0;
}