#include <stdio.h>

int main() {
    int tamanho = 0;
    do {
        printf("Quantos elementos serão analisados? ");
        scanf("%d", &tamanho);
        if(tamanho <= 0) {
            printf("Tamanho inválido\n");
        }
    } while(tamanho <= 0);

    int vetor[tamanho];

    for(int cont = 0;cont < tamanho;cont++) {
        printf("Digite um número inteiro [%d / %d]:", cont + 1, tamanho);
        scanf("%d", &vetor[cont]);
    }

    for (int cont = 0; cont < tamanho; cont++)
    {
        printf("%d\n", vetor[cont]);
    }
    
    return 0;
}