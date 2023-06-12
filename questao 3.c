) #include <stdlib.h>
#include <string.h>

int main(){
    int matriz[2][3];
    int soma=0;
    memset(matriz, 0, sizeof(matriz));
    for(int i=0; i<=1; i++){
        for(int j=0; j<=2; j++){
            printf("Digite um número: ");
            scanf("%d", &matriz[i][j]);
        }
    }
    for(int i=0; i<=1; i++){
        for(int j=0; j<=2; j++){
            soma += matriz[i][j];
        }
    }
    printf("A soma de todos os elementos da matriz é %d", soma);
    return 0;
}
