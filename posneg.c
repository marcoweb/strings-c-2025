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
        printf("%d é", vetor[cont]);
        if(vetor[cont] > 0) {
            printf(" positivo\n");
        } else if (vetor[cont] < 0) {
            printf(" negativo\n");
        } else {
            printf(" igual à zero\n");
        }
    }
    
    return 0;
}