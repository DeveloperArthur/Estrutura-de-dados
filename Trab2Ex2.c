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
	int matriz[3][2], menor_soma=0, soma[3];
	soma[0]=0;
	soma[1]=0;
	soma[2]=0;
	
	//insere valores o array
	for(int i=0; i<3; i++){
		for(int l=0; l<2; l++){
			printf("Digite o valor de [%i][%i]: ", i,l);
			scanf("%i", &matriz[i][l]);
			soma[i]=soma[i]+matriz[i][l];
		}
	}
	
	//identifica qual eh a menor soma
	for(int j=0; j<3; j++){
		printf(" soma %i = %i ", j, soma[j]);
		if (j==0) menor_soma = soma[0];
		if(soma[j]<menor_soma){
			menor_soma = soma[j];
		}
	}
	
	//imprime a matriz
	printf("\nMatriz: ");
	for(int m=0; m<3; m++){
		printf("\n");
		for(int k=0; k<2; k++){
			printf("[%i]", matriz[m][k]);
		}
	}
	
	printf("\n\n %i - este eh o menor somatorio", menor_soma);
}
