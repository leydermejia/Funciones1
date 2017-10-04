#include <stdio.h>
/*Comentario
Funcion que toma como parametros un vector de enteros y su tamaño e imprime 
un vector con los elementos impares del vector recibido.
Fecha:25-Septiembre-2017
Elaborado por: Leyder Londoño Mejia*/

void num_impares(int vec1[],int vec2[], int lon);
int vec1[100],vec2[100],lon;
int main()
{
	printf("Ingrese la dimension del vector \n");
	scanf("%d",&lon);
	printf("Ingrese los elementos del vector \n");
	for(int i=0;i<lon;i++){
		scanf("%d",&vec1[i]);		
	}	
	num_impares(vec1,vec2,lon);
	return 0;
}
void num_impares(int vec1[],int vec2[], int lon){
	printf("Los elementos impares del vector son \n");
	for(int i=0;i<lon;i++){
		if(vec1[i]%2==1){
			vec2[i]=vec1[i];
		}
		if(vec2[i]!=0){
			printf("%d\n",vec2[i]);
		}		
	}	
}

