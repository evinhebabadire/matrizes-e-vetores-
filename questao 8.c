#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    /*Criei dois vetores, um para armazenar todos os valores que digitar, e outro para os números impares. */
    int vetor[10];
    int impares[10];
    memset(impares, 0, sizeof(impares));
    int quantidade_de_impares;
    for(int c=0; c<=9; c++){
        printf("Digite um número: ");
        scanf("%d", &vetor[c]);
        /*Essa parte do codigo viza corrigir um problema: Digamos que os números impares só apareçam nas posições 1,8 e 10, nesse caso, quando eu for printar o vetor vai haver muitos números zeros, pois boa parte do vetor impares estará vazio, então, aqui viza verificar qual parte do vetor está vazio, e sempre ocupar os espaços em ordem crescente.*/
        if(vetor[c] % 2 != 0){
            for(int j=0; j<=9; j++){
                if(impares[j] == 0){
                    impares[j] = vetor[c];
                    quantidade_de_impares++;
                    break;
                }
            }
        }
    }
   for(int a=0; a<=quantidade_de_impares-1; a++){
        printf("%d ", impares[a]);
    }
    
    return 0;
}
