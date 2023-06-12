#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[10];
    int maior, menor=0;
    int primeiro=0;
    for(int c=0; c<=9; c++){
        printf("Digite um número: ");
        scanf("%d", &vetor[c]);
        if(vetor[c] >= maior){
            maior = vetor[c];
        }
        if(primeiro==0){
            menor=vetor[c];
            primeiro +=1;
        }
        if(vetor[c] <= menor){
            menor = vetor[c];
        }
    }
    printf("O maior número do vetor é %d e o menor número é %d, e a diferença entre ambos é %d", maior, menor, maior-menor);
    return 0;
}
