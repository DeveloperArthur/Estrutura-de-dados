#include<stdio.h>
#include<stdlib.h>
struct aluno{
	int ra;
	char nome[20];
};

main(){
	struct aluno al[3];
	//ra
	printf("Digite um primeiro RA: ");
	scanf("%d", &al[0].ra);
	printf("Digite um segundo RA: ");
	scanf("%d", &al[1].ra);
	printf("Digite um terceiro RA: ");
	scanf("%d", &al[2].ra);
	printf("Cadastrados: %d, %d, %d\n", al[0].ra, al[1].ra, al[2].ra);
	//nome
	printf("Digite um primeiro nome: ");
	fflush(stdin);
	gets(al[0].nome);
	printf("Digite um segundo nome: ");
	fflush(stdin);
	gets(al[1].nome);
	printf("Digite um terceiro nome: ");
	fflush(stdin);
	gets(al[2].nome);
	printf("Cadastrados: %s, %s, %s", al[0].nome, al[1].nome, al[2].nome);
}
