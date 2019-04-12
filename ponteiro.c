#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	int *p;
	int a=5;
	p = &a;
	printf(" a = %d\n", a);
	printf(" &a = %p\n", &a);
	printf(" p = %p\n", p);
	printf(" &p = %p\n", &p);
	printf(" *p = %d\n", *p);
}
