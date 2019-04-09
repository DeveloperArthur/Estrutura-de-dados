/*
Faça um programa um jogo da forca em linguagem C
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char palavra[10];
	int tam, tent=5, aux=0;
	printf("Cadastre uma palavra no jogo da forca: ");
	fflush(stdin);
	gets(palavra);
	
	tam = strlen(palavra);
	char letras[tam];
	
	for(int z=0; z<100; z++){
		printf("\n");
	}
	
	printf("CADA LETRA QUE VOCE ACERTA, GANHA +1 TENTATIVA\n\n");
	printf("letras: %i\n", tam);
	
	for(int j=0; j<tam; j++){
		printf("tentativas: %i\n", tent);
		printf("digite uma letra: ");
		scanf("%s", &letras[j]);
		
		for(int k=0; k<tam; k++){
			for(int l=0; l<tam; l++){
				if(palavra[k]==letras[l]){
					printf("-> %c \n", letras[l]);
					tent++;
				}else{
					aux++;	
				}
				if(tent==5){
					break;
				}
			}
		}
		if(aux>0){
			tent--;
		}
	}
	printf("\n\nA palavra eh %s.\n", palavra);
}
