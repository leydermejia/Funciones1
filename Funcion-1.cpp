#include <stdio.h>
/*Comentario
Funcion que acepte dos números en punto flotante como parámetros, multiplique estos dos números y despliegue el resultado.
Fecha: 23-09-17
Elaborado por: Leyder Londoño Mejia */

 float mult(float digito, float digito2);
int main() {
	float digito;
	float digito2;
	
	printf("Ingrese digito \n");
	scanf("%f",&digito);
	scanf("%f",&digito2);
	printf("El resultado es %f \n",mult(digito,digito2));
	
	return 0;
}
float mult(float digito, float digito2){
	float resultado;
	resultado=digito*digito2;
	return resultado;
}
