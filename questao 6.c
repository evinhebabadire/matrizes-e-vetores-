#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[10];
    int maior=0;
    for(int c=0; c<=9; c++){
        printf("Digite um número: ");
        scanf("%d", &vetor[c]);
        if(vetor[c] > maior){
            maior = vetor[c];
        }
    }
    printf("O maior número do vetor é %d", maior);
    return 0;
}
