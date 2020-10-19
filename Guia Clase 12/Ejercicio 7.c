#include<stdio.h >
#include <stdlib.h>

int NumMayor(int a, int b)
{
int NMayor;
if(a<b)
{
NMayor=b;
}
else
{
NMayor=a;
}
return (NMayor);
}



void main()
{
int Num=0, Num2=0;
printf("Ingrese un numero");
scanf("%d",&Num);
printf("Ingrese otro numero");
scanf("%d",&Num2);
if(Num==Num2)
{
	printf("son iguales");	
}
else 
{
	printf("El numero mayor es %d",NumMayor(Num, Num2));
}
}

