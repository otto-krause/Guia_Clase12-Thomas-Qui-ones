#include<stdio.h >
#include <stdlib.h>

int Lado1()
{
int a, b;
printf("Ingrese la altura del rectangulo");
scanf("%d",&a);
return (a);
}


int Lado2()
{
int b;
printf("Ingrese la base del rectangulo");
scanf("%d",&b);
return (b);
}


void main()
{
int a, b, Area, Perimetro;
a = Lado1();
b = Lado2();
Area=a*b;
Perimetro=2*a+2*b;
printf("el area del rectangulo es %d\n",Area);
printf("el perimetro del rectangulo es  %d\n",Perimetro);
}

