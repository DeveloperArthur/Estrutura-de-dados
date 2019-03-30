/*
Faça um programa no qual o usuário digite 6 números 
em uma matriz 3 X 2, depois informe qual das linha 
apresenta o menor somatório dos números digitados.
[3][7] = 10 
[2][5] = 7 este eh o menor somatorio
[8][1] = 9
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int matriz[3][2], menor_soma, i,l, soma[3];
	soma[0]=0;
	soma[1]=0;
	soma[2]=0;
	for(i=0; i<3; i++){
		for(l=0; l<2; l++){
			printf("Digite o valor de [%i][%i]: ", i,l);
			scanf("%i", &matriz[i][l]);
			soma[i]=soma[i]+matriz[i][l];
		}
	}
	printf("soma 1: %i soma2: %i soma3: %i", soma[0], soma[1], soma[2]);
}
