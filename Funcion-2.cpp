#include <stdio.h>
/*Comentario
Funcion que calcule el cuadrado del valor que se le transmite y despliegue el resultado. La funci�n deber� ser capaz de elevar al cuadrado n�meros flotantes.
Fecha: 23-09-17
Elaborado por: Leyder Londo�o Mejia */

float al_cuadrado(float digito);
int main() {
	float digito;
	
	printf("Ingrese digito \n");
	scanf("%f",&digito);
	printf("El resultado es %f \n",al_cuadrado(digito));
	return 0;
}
float al_cuadrado(float digito){
	float resultado;
	resultado=digito*digito;
	return resultado;
}
