#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2;
	int* pont_num1, pont_num2;
	pont_num1 = &num1;
	pont_num2 = &num2;
	printf("\nDigite um n�mero inteiro natural: ");
    scanf("%i", &num1);
    printf("\nDigite outro n�mero inteiro natural: ");
    scanf("%i", &num2);
    printf("\nEndere�o de mem�ria do num1: %p", pont_num1);
    printf("\nEndere�o de mem�ria do num1: %p", pont_num2);
    if(pont_num1>pont_num2){
    	printf("\nO maior endere�o de mem�ria est� com o n�mero %i", num1);
	}else{
		printf("\nO maior endere�o de mem�ria est� com o n�mero %i", num2);
	}
	return 0;
}
