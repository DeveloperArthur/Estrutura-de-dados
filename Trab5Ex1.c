/*Crie um programa com um fun��o que receba duas vari�veis inteiras
por valor, digitadas pelo usu�rio e depois retorne o valor da soma 
para a fun��o main imprimir o resultado.*/
#include<stdio.h>
int soma(int a, int b){
	return a+b;
}
int main(){
	int a,b;
	scanf("%i %i", &a, &b);
	printf("%i + %i = %i", a, b, soma(a,b));
}
