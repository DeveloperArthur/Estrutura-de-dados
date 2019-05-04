#include<stdio.h>
#include<stdlib.h>
struct carro{
	struct carro *anterior;
	int ano;
	char nome[20];
};
main(){
	struct carro *p = NULL;
	
	do{
		p = (struct carro *) malloc(sizeof(struct carro));
		printf("Digite o ano do carro: ");
		scanf("%d", &p->ano);
		if(p->ano == 0){
			break;
		}
	}while(1);
	
	
	
	printf("Os dados cadastrados foram\n");
	do{
		printf("ano %d\n", p->ano);
		break;
	}while(1);
}
