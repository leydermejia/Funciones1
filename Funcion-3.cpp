#include <stdio.h>
/*Comentario
Funcion que eleve un número entero que se le transmita a una potencia en número entero positivo y despliegue el resultado. El número entero positivo deberá ser el segundo valor transmitido a la función.
Fecha: 23-09-17
Elaborado por: Leyder Londoño Mejia */

int funpot(int digito, int potencia);
int main() {
	int digito;
	int potencia;
	
	printf("Ingrese digitos \n");
	scanf("%d",&digito);
	printf("Ingrese digitos \n");
	scanf("%d",&potencia);
	
	printf("El resultado es %d \n",funpot(digito,potencia));
	return 0;
}
int funpot(int digito, int potencia){
	int resultado,j;
	resultado=1;

	for(j=1;j<=potencia;j++){
		resultado=resultado*digito;
	}
	return resultado;
}
