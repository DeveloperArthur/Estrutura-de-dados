/*
Faça um programa um jogo da forca em linguagem C
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char palavra[10];
	int cont=0, tam;
	printf("Cadastre uma palavra no jogo da forca.\n");
	fflush(stdin);
	gets(palavra);
	
	tam = strlen(palavra);
	char letras[tam];
	
	printf("A palavra tem %i letras e %i chances!!!\n", tam, tam);
	
	for(int z=0; z<100; z++){
		printf("\n");
	}
	
	for(int j=0; j<tam; j++){
		printf("digite uma letra: ");
		scanf("%s", &letras[j]);
		int aux=0;
		
		for(int k=0; k<tam; k++){
			for(int l=0; l<tam; l++){
				if(palavra[k]==letras[l]){
					cont++;
					printf("-> %c \n", letras[l]);
				}
			}
		}
	}
	printf("\n\nA palavra eh %s.\n", palavra);
}	
