/*
Faça um programa no qual o usuário digite 5 números e 
um vetor de depois o programa informa qual é o menor valor encontrado no vetor.
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int array[5], menor=0;
	
	for (int i=0; i<5; i++){
		printf("Digite o numero da posicao [%i]: ", i+1);
		scanf("%i", &array[i]);
		if(i==0) menor = array[i];
		if(array[i]<menor) menor = array[i];
	}
	
	printf("\nO menor numero digitado no vetor foi %i.", menor);
	
}
