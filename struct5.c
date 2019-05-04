#include<stdio.h>
#include<stdlib.h>
struct carro{
	struct carro *anterior;
	int ano;
	char nome[20];
};
main(){
	struct carro *p = NULL;
	struct carro *anterior = NULL;
	
	
	do{
		p = (struct carro *) malloc(sizeof(struct carro));
		printf("Digite o ano do carro: ");
		scanf("%d", &p->ano);
		
		p->anterior = anterior;
		anterior = p;
		
		if(p->ano == 0){
			break;
		}
	}while(1);
		
	//printa os dados cadastrados
	printf("\nOs dados cadastrados foram:\n");
	do{
		printf("ano do carro %d\n", p->ano);		
		if (p->anterior==NULL){		
			break;
		}
		p = p->anterior;
	}while(1);
}
