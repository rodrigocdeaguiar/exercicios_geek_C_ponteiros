#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int inteiros[5], i;
	int* ptr;
	ptr = &inteiros;
	for(i=0; i<5; i++){
		printf("\nInforme o valor %d de 5: ", i+1);
		scanf("%i", &inteiros[i]);
	}
	for(i=0; i<5; i++){
        printf("%d\n", *(ptr + i) * 2); // Imprime o valor dobrado
    }
	return 0;
}
