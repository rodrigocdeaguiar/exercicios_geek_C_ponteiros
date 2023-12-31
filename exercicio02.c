#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	int* pont_num1, pont_num2;
	pont_num1 = &num1;
	pont_num2 = &num2;
	printf("\nDigite um número inteiro natural: ");
    scanf("%i", &num1);
    printf("\nDigite outro número inteiro natural: ");
    scanf("%i", &num2);
    printf("\nEndereço de memória do num1: %p", pont_num1);
    printf("\nEndereço de memória do num1: %p", pont_num2);
    if(pont_num1>pont_num2){
    	printf("\nO maior endereço de memória está com o número %i", num1);
	}else{
		printf("\nO maior endereço de memória está com o número %i", num2);
	}
	return 0;
}
