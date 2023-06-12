#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int vetor[10];
    int primos[10];
    int prime;
    memset(primos, 0, sizeof(primos));
    int quantidade_de_primos=0;

    for(int c=0; c<=9; c++){
        printf("Digite um número: ");
        scanf("%d", &vetor[c]);
        prime = 0; 
        for(int b=1; b<=vetor[c]; b++){
            if(vetor[c] % b == 0){
                prime += 1;
            }
        }
        if(prime == 2){
            for(int j=0; j<=9; j++){

                if(primos[j] == 0){
                    primos[j] = vetor[c];
                    quantidade_de_primos++;
                    prime = 0; 
                    break;

                }
            }
        }
    }
    for(int a=0; a<=quantidade_de_primos-1; a++){

        printf("%d ", primos[a]);

    }

    return 0;
}
