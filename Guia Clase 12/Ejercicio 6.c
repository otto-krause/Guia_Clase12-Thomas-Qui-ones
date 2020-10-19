#include<stdio.h >
#include <stdlib.h>

int Total(int a)
{
int T;	
T=a/8;
return T;
}


void main()
{
int Num;
printf("Ingrese un numero");
scanf("%d",&Num);
printf("la octava parte es %d\n",Total(Num));
}

