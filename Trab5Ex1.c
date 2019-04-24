/*Crie um programa com um função que receba duas variáveis inteiras
por valor, digitadas pelo usuário e depois retorne o valor da soma 
para a função main imprimir o resultado.*/
#include<stdio.h>
int soma(int a, int b){
	return a+b;
}
int main(){
	int a,b;
	scanf("%i %i", &a, &b);
	printf("%i + %i = %i", a, b, soma(a,b));
}
