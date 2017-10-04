#include <stdio.h>
/*Comentario
Funcion que devuelva la parte fraccionaria de cualquier número introducido por el usuario. Por ejemplo, si se introduce el número 256.879, debería desplegarse el número 0.879
Fecha: 23-09-17
Elaborado por: Leyder Londoño Mejia */

float fra_(float digito);
int main() {
	float digito;
	
	printf("Ingrese digito \n");
	scanf("%f",&digito);
	printf("El fraccionario es %.4f \n",fra_(digito));
	return 0;
}
float fra_(float digito){
	float fracc;
	int num;
	
	num=digito;
	fracc=digito-num;
	return fracc;
}
