#include <stdio.h>
/*Comentario
Funcion que acepte dos n�meros en punto flotante como par�metros, multiplique estos dos n�meros y despliegue el resultado.
Fecha: 23-09-17
Elaborado por: Leyder Londo�o Mejia */

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
