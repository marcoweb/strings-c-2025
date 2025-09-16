#include <stdio.h>

int main(){
    char texto[50];
    int cont = 0;

    printf("Digite um texto: ");
    scanf("%50[^\n]", texto);

    printf("Texto digitado: %s\n", texto);

    while (texto[cont] != '\0') {
        cont++;
    }

    printf("Quantidade de caracteres: %d\n", cont);
    

    return 0;
}