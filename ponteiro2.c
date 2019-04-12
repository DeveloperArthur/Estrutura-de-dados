#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int *p;
	int vet[3] = {2,6,9};
	p = &vet[0];
	p++;
	printf("*p = %d\n", *p);
	printf("tamanho de char = %d", sizeof(char));
}
