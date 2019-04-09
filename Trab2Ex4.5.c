/*Faça um jogo da velha utilizando matriz. 
Os jogadores deverão informar a linha e a 
coluna para realizar a jogada.
*/
#include<stdio.h>
#include<stdlib.h>

int main(){
	char mat[3][3]={{0}};
	int lin,col,cont=1;
	printf("Jogo da velha");
	while(1){
		printf("\nLinha: ");
		scanf("%d", &lin);
		printf("\nColuna: ");
		scanf("%d", &col);
		cont++;
		for(int i=0; i<3; i++){
			printf("\n");
			for(int j=0; j<3; j++){
				if(cont%2==0){
					mat[lin][col]='x';
				}else{
					mat[lin][col]='O';
				}
				printf("[%c]", mat[i][j]);
			}
		}
	}
}

