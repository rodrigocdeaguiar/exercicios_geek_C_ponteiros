#include <stdio.h>
#include <locale.h>

void imprimeValores (int num1, float num2, char caract){
	printf("Int = %i ", num1);
	printf("Float = %.3f ", num2);
	printf("Char = %c", caract);
	printf("\n");
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int inteiro=0;
	float real=0;
	char caractere=0;
	int* ponteiro_inteiro;
	float* ponteiro_real;
	char* ponteiro_caractere;
	printf("\n___ANTES DAS VARIÁVEIS SEREM MODIFICADAS:___");
	imprimeValores(inteiro, real, caractere);
	ponteiro_inteiro = &inteiro;
	ponteiro_real = &real;
	ponteiro_caractere = &caractere;
	printf("\n___DEPOIS DAS VARIÁVEIS SEREM MODIFICADAS:___");
	imprimeValores(inteiro, real, caractere);
	return 0;
}
