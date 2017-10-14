#include <stdio.h>
/*Comentario
Metodo de ordenamiento insercion 
Fecha:12-10-17
Elaborado por: Leyder Londoño Mejia*/
void Insercion(int vector[],int longt);
int vector[100],longt;
int main() {
	Insercion(vector,longt);
	return 0;
}
void Insercion(int vector[],int longt){
	int i,a,indice;
	printf("Ingrese longitud \n");
	scanf("%d",&longt);
	
	printf("Ingrese los elementos del vector \n");
	for(i=0;i<longt;i++){
		scanf("%d",&vector[i]);
	}
	printf("Elementos ordenados \n");
	for(i=1;i<longt;i++){
		indice=vector[i];
		a=i-1;
		while(a>=0&&vector[a]>indice){
			vector[a + 1]=vector[a];
			a--;
		}
		vector[a+1]=indice;
	}
	for(i=0;i<longt;i++){
		printf("%d\n",vector[i]);
	}
}
