#include <stdio.h>

int main() {
    char nome[10] = "Antônio";

    //char letra = 'M';

    printf("%s\n", nome);

    //for(int cont = 0;cont <5;cont++) {
    for(int cont = 0 ; nome[cont] != '\0';cont++) {
        printf("%c\n", nome[cont]);
    }

    char mensagem[20];

    printf("Digite uma mensagem curta:");
    //scanf("%s", mensagem);
    //scanf("%[^\n]", mensagem); // Lê até a proxima quebra de linha
    //scanf("%20s", mensagem);
    scanf("%20[^\n]", mensagem);

    printf("%s\n", mensagem);

    return 0;
}