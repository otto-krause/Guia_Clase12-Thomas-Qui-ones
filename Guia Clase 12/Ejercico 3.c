#include<stdio.h >
#include <stdlib.h>

int PorcH(int a, int b)
{
int PorcH;	
PorcH=a*100/b;
return PorcH;
}


int PorcM(int a, int b)
{
int PorcM;	
PorcM=a*100/b;
return PorcM;
}


void main()
{
int H, M, Total;
printf("Ingrese la cantidad de hombres");
scanf("%d",&H);
printf("Ingrese la cantidad de mujeres");
scanf("%d",&M);
Total=H+M;
printf("el porcentaje de hombres postulados es %d\n",PorcH(H,Total));
printf("el porcentaje de mujeres postuladas es %d\n",PorcM(M,Total));
}

