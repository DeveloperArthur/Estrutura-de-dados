#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void incrementar(int i){
	i++;
}

int main(){
	int i = 5;
	incrementar(i);
	printf("%d",i);
}


