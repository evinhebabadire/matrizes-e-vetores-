)#include <stdio.h>

int main()
{
  int lin, col;
  int matriz [3][3];
    for (lin = 0; lin < 3; lin++){
      for ( col = 0; col < 3; col++){
              printf("%d", matriz[lin][col]);
      }
      printf("\n");
    }
    printf("\n");
    for (lin = 0; lin < 3; lin++){
      for ( col = 0; col < 3; col++){
        matriz[lin][col]*=2;
        printf("%d", matriz[lin][col]);
      }
      printf("\n");
    }
