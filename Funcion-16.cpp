#include <stdio.h>
/*Comentario
Funcion que devuelve la fecha mas reciente de cualquier par de fechas que se le
transmitan.
Fecha:25-Septiembre-2017
Elaborado por: Leyder Londoño Mejia*/

int mayor(int dia,int mes, int digito,int dia2, int mes2, int digito2);

int main()
{
	int dia1, mes1, digito1,dia2, mes2, digito2;
	printf("<------- Ingrese la primera fecha ------>\n");
	printf("\n Ingrese el dia \n");
	scanf("%d",&dia1);
	printf("\n Ingrese el mes \n");
	scanf("%d",&mes1);
	printf("\n Ingrese el año \n");
	scanf("%d",&digito1);
	
	printf("<------- Ingrese la segunda fecha ------->\n");
	printf("\n Ingrese el dia \n");
	scanf("%d",&dia2);
	printf("\n Ingrese el mes \n");
	scanf("%d",&mes2);
	printf("\n Ingrese el año \n");
	scanf("%d",&digito2);
	
	mayor(dia1,mes1,digito1,dia2,mes2,digito2);
	return 0;
}

int mayor(int dia1,int mes1, int digito1,int dia2, int mes2, int digito2){	
	printf("La mayor de las fechas es ");
	if (digito1>digito2){
		printf("%d / %d / %d\n",dia1,mes1,digito1);
	}else{
		printf("%d / %d / %d \n",dia2,mes2,digito2);
	}	
}
