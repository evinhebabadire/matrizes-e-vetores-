)#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int vetor[8];
    int number=0;
    int verdadeiro=0;
    memset(vetor, 0, 8);
    for(int c=0; c<=7;c++){
        printf("Digite um número: ");
        scanf("%d", &vetor[c]);
    }
    printf("Qual número deseja buscar? ");
    scanf("%d", &number);
    for(int i=0; i<=7; i++){
        if(vetor[i] == number){
            printf("O número existe. E está na posição %d", i);
            verdadeiro=1;
            break;
        }
    }
    if(verdadeiro==0){
        printf("O número não está ai.");
    }
    return 0;
}
