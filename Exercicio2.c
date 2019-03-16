/*Exercicio 2
Faça um programa no qual o usuário digite 6 números reais em uma matriz 
com 3 linhas e 2 colunas e depois simplesmente imprima os números armazenados na matriz.*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

/*
0 0 
0 0 
0 0
*/

int main(){
	float mat[3][2];
	for(int i=0; i<3; i++){
		for(int l=0; l<2; l++){
		printf("Digite o valor de [%i][%i]: ", i,l);
		scanf("%f", &mat[i][l]);
		}
	}	
	
	for(int j=0; j<3; j++){
		printf("\n");
		for(int k=0; k<2; k++){
			printf("[%2.f]", mat[j][k]);
		}
	}
	
}

