#include <stdio.h>
/*Comentario
Funcion que devuelva el valor máximo de tres argumentos que se transmitan a la función cuando sea llamada. Suponga que los tres argumentos serán del mismo tipo de datos
Fecha: 23-09-17
Elaborado por: Leyder Londoño Mejia */

int maximo(int digito, int digito2, int digito3);
int main() {
	int digito;
	int digito2;
	int digito3;
	printf("Ingrese 3 digitos\n");
	scanf("%d",&digito);
	scanf("%d",&digito2);
	scanf("%d",&digito3);
	printf("El mayor es %d \n",maximo(digito,digito2,digito3));
	return 0;
}
int maximo(int digito, int digito2, int digito3){
	int mayor=digito;
	if(mayor>digito2){
		mayor=digito;
	}
	if(digito2>mayor){
		mayor=digito2;
	}
	if(digito3>mayor){
		mayor=digito3;
	}
	
	return mayor;
}
