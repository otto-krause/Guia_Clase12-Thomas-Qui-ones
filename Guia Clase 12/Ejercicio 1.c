#include<stdio.h >
#include <stdlib.h>

int Num()
{
int num1;
printf("Ingrese un numero");
scanf("%d",&num1);
return (num1);
}


int Num2()
{
int num2;
printf("Ingrese el segundo numero");
scanf("%d",&num2);
return(num2);
}

void main()
{
int num1, num2;
num1 = Num();
num2 = Num2();
printf("los numeros ingresados son %d\n",num1);
printf("los numeros ingresados son  %d\n",num2);
}

