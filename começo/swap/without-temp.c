/*
Trocando arquivo sem estar usando uma variavel temporária em c 
Swap 2 numbers without using a temporary variable c 
*/


#include <stdio.h>

int main(){
    int x = 10, y = 5;

    printf("Antes de trocar x = %d e y=%d\n", x, y);

    x = x + y - (y = x);

    printf("Depois de trocar x = %d e y = %d", x, y);
    return 0;
}