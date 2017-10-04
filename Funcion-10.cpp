#include <stdio.h>
/*Comentario
Funcion que toma como parametros un vector de numeros enteros y devuelve la suma 
de sus elementos.
Fecha:25-Septiembre-2017
Elaborado por: Leyder Londoño Mejia*/

int suma(int vec[],int lon);
int vec[100],lon;
int main()
{	
	printf("Ingrese longitud del vector \n");
	scanf("%d",&lon);
	
	printf("Ingrese elementos del vector \n");
	for (int i=0;i<lon;i++){
		scanf("%d",&vec[i]);
	}


	printf("La suma de los elementos del vector es: %d\n",suma(vec,lon));	
	return 0;
}

int suma(int vec[],int lon){
	int sumar;
	sumar=0;
	for(int i=0;i<lon;i++){
		sumar+=vec[i];
	}	
	return sumar;
}
