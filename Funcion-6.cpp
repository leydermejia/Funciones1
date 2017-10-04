#include <stdio.h>
/*Comentario
Funcion Intercambiar el valor de 2 variables utilizando paso de parámetros por referencia.
Fecha:23-09-17
Elaborado por: Leyder Londoño Mejia */

int intercambiar(int &l, int &m);
int main() {
	int digito;
	int digito2;

	printf("Ingrese los digitos\n");
	scanf("%d",&digito);
	scanf("%d",&digito2);
	
	intercambiar(digito,digito2);
	printf("El resultado es %d,%d\n",digito,digito2);
	return 0;
}
int intercambiar(int &l, int &m){
	
	l=10;
	m=20;
   return l,m ;
}


