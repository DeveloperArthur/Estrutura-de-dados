/*
Faça um programa no qual o usuário digite 6 números 
em uma matriz 3 X 2, depois o programa deve informar 
em qual linha e em qual coluna está o maior número digitado.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int matriz[3][2], maior=0, lin, col, i, l;
	
	for(i=0; i<3; i++){
		for(l=0; l<2; l++){
			printf("Digite o valor de [%i][%i]: ", i,l);
			scanf("%i", &matriz[i][l]);
			if(i==0 && l==0) maior = matriz[i][l];
			if(matriz[i][l]>maior) maior = matriz[i][l];
			lin=i;
			col=l;
		}
	}
	printf("\nO maior numero digitado na matriz foi %i e esta na posicao[%i][%i]", maior, lin,col);
}
