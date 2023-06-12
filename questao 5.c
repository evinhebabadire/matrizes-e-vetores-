#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int matriz[3][3];
    int soma=0;
    memset(matriz, 0, sizeof(matriz));
    for(int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){
            printf("Digite um número: ");
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");
    for(int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){
            if(i!=j){
                printf("%d ", matriz[i][j]);
            }

        }
    }
    return 0;
}
