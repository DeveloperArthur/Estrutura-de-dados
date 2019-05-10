#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int array[5], temp=0;
	
	for(int i=0; i<5; i++){
		printf("digite o valor do array[%i]\n", i);
		scanf("%i", &array[i]);
	}
	
	//ordenando
	for(int j=0; j<5; j++){
		for(int k=0; k<4; k++){
			if(array[k] > array[k+1]){
				temp = array[k];
				array[k] = array[k+1];
				array[k+1] = temp;
			}
		}
	}
	
	printf("array ordenado:\n");
	for(int i=0; i<5; i++){
		printf("[%i] ", array[i]);
	}
	
}


