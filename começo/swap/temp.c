#include <stdio.h>

int main()
{
   int x = 10, y = 20, temp;
   
   printf("X = %d\n, Y = %d\n", x, y);

   temp = x;
   x = y;
   y = temp;
 
   printf("Depois de ser trocado X = %d\n, Y= %d\n")

   return 0;

/*
Troca de valores temporários que será o y;
*/
}