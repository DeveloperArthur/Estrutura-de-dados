/*
Fa�a um programa no qual o usu�rio digite 6 n�meros 
em uma matriz 3 X 2, depois informe qual das linha 
apresenta o menor somat�rio dos n�meros digitados.
[3][7] = 10 
[2][5] = 7 este eh o menor somatorio
[8][1] = 9
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int matriz[3][2], menor_soma, i, l, j, soma[3], lin, col;
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
	
	for(j=0; j<3; j++){
		menor_soma = soma[0];
		if(soma[j]<menor_soma){
			menor_soma = soma[i];
		}
	}
	
	printf("\nMatriz: ");
	for(int m=0; m<3; m++){
		printf("\n");
		for(int k=0; k<2; k++){
			printf("[%i]", matriz[m][k]);
		}
	}
	
	printf("\n\nO menor somatorio eh %i e esta na posicao[%i][%i]", menor_soma, lin,col);
}
