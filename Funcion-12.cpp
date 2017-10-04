#include <stdio.h>
/*Comentario
Funcion que toma como parametro un vector de numeros y su tamaño y cambie el 
signo de los elementos del vector.
Fecha:24-Septiembre-2017
Elaborado por: Leyder Londoño Mejia*/

void cambio_signo(int vec[], int largo);
void ver_vector(int vec[],int largo);
int vec[100],largo;

int main()
{
	printf("Ingrese tamaño del vector \n");
	scanf("%d",&largo);
	
	printf("Ingrese elementos del vector \n");	
	for (int i=0;i<largo;i++){
		scanf("%d",&vec[i]);		
	}	
	cambio_signo(vec,largo);
	ver_vector(vec,largo);
	return 0;
}
void cambio_signo(int vec[], int largo){
	for(int i=0;i<largo;i++){
	   vec[i]*=-1;
	}	
}
void ver_vector(int vec[],int largo){
	printf("Los elementos del vector con signo cambiado \n");	
	for(int i=0;i<largo;i++){
		printf("%d\n",vec[i]);
	}
}
