/*
Fa�a um programa no qual o usu�rio digite 5 n�meros em 
um vetor e depois o programa deve simplesmente exibir os 
n�meros em ordem inversa a que foi digitada.
Exemplo:
Digitou: 1, 5, 6, 7, 8
O n�meros s�o: 8, 7, 6, 5, 1
*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int array[5];
	for (int i=0; i<5; i++){
		printf("Digite o numero da posicao [%i]: ", i);
		scanf("%i", &array[i]);
	}
	
	printf("\nNumeros em ordem inversa abaixo: ");
	
	for(int j=4; j>=0; j--){
		printf("%i ", array[j]);
	}
	
}
