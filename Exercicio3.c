/*Exercicio 3
aça um programa que leia o nome de uma pessoa e depois
apresente uma mensagem informando qual foi o nome digitado. */

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	char nome[20];
	printf("Digite seu nome: ");
	fflush(stdin);
	gets(nome);
	printf("Nome digitado: %s", nome);
}

