/*Fa�a um programa para converter uma string 
para letra mai�scula. Utilize a tabela ASCII neste exerc�cio. 
N�O VALE usar o TOUPPER(), STRUPPER e nenhuma outra fun��o pronta.
*/

#include<stdio.h>
#include<string.h>

int main(){
	char nome[15];
	
	printf("Digite o nome: ");
	fflush(stdin);
	gets(nome);
	
	int tam = strlen(nome);
	
	for(int i=0; i<tam; i++){
		printf("%c", nome[i]-32);
	}
}
