#include <stdio.h>
/*Comentario
Metodo de ordenamiento burbuja
Fecha:12-10-17
Elaborado por: Leyder Londoño Mejia*/
void Burbuja(int vector[],int longt,int aux);
int vector[100],longt,aux;
int main() {
	Burbuja(vector,longt,aux);
return 0;
}
void Burbuja(int vector[],int longt,int aux){
	int i,j;
	printf("Ingrese longitud \n");
	scanf("%d",&longt);
	
	printf("Ingrese los elementos del vector \n");
	for(i=0;i<longt;i++){
		scanf("%d",&vector[i]);
	}
	printf("Elementos ordenados \n");
	for(i=0;i<longt;i++){
		for(j=0;j<longt;j++){
			if(vector[j]>vector[j+1]){
				aux=vector[j];
				vector[j]=vector[j+1];
				vector[j+1]=aux;
			}
		}
	}
	for(i=1;i<=longt;i++){
		printf("%d",vector[i]);
	}
}	
