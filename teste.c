#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int array[5], i;
    int *ptr = array; // Ponteiro para o array

    printf("Digite 5 números inteiros:\n");

    // Lendo os valores e armazenando no array usando ponteiros
    for(i=0; i<5;i++){
        scanf("%d", ptr + i); // ptr + i representa o endereço de cada elemento do array
    }

    printf("O dobro de cada valor lido é:\n");

    // Imprimindo o dobro de cada valor usando ponteiros
    for(i=0; i<5; i++){
        printf("%d\n", *(ptr + i) * 2); // Imprime o valor dobrado
    }

    return 0;
}
