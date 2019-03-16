/*Exercicio 1
Faça um programa no qual o usuário digite 5 números inteiros 
em um vetor e depois simplesmente imprima os números armazenados no vetor.*/

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

