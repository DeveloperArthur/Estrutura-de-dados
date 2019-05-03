//alocacao dinamica
#include<stdio.h>
#include<stdlib.h>

main(){
	int *p;
	printf("Digite o RA:");
	p = (int *) malloc(sizeof(int));
	//Vai alocar uma string com 4 caracteres
	//p = (char *) malloc (4 * sizeof(char));
	scanf("%d", &(*p));
	printf("O RA digitado foi %d", *p);
}
