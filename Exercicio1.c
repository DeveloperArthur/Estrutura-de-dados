/*Exercicio 1
Fa�a um programa no qual o usu�rio digite 5 n�meros inteiros 
em um vetor e depois simplesmente imprima os n�meros armazenados no vetor.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int array[5];
	for(int i=0; i<5; i++){
		printf("Digite o numero %i: ", i+1);
		scanf("%i",&array[i]);
	}
	
	printf("\nNumeros digitados: ");
	for(int j=0; j<4; j++){
		printf("%i-", array[j]);
	}
	printf("%i", array[4]);
}

