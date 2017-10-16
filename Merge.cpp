#include <stdio.h>
#include<stdlib.h>
/*Comentario
Metodo de Ordenamiento Merge
Fecha:14 Octubre 2017
Elaborado por: Leyder Londoño Mejia*/

void Mezclar(int vector1[],int n1,int vector2[],int n2,int vector3[]);
void Mezcla(int vector[],int n);
void Mostrar_Vector(int vector[],int n);
int main()
{
	int tam;
	printf("Ingrese Longitud del vector:\n");
	scanf("%d",&tam);
	int vector[100];
	
	printf("Ingrese elementos del vector:\n");	
	for (int i=0;i<tam;i++){
		scanf("%d",&vector[i]);
	}
	Mezcla(vector,tam);
	Mostrar_Vector(vector,tam);
	return 0;
}
void Mezclar(int vector1[],int n1,int vector2[],int n2,int vector3[]){
	int x1=0;
	int x2=0;
	int x3=0;
	
	while(x1<n1 && x2<n2){
		if(vector1[x1]<vector2[x2]){
			vector3[x3]=vector1[x1];
			x1++;
		}else{
			vector3[x3]=vector2[x2];
			x2++;
		}
		x3++;
	}
	while(x1<n1){
		vector3[x3]=vector1[x1];
		x1++;
		x3++;
	}
	while(x2<n2){
		vector3[x3]=vector2[x2];
		x2++;
		x3++;
	}	
}
void Mezcla(int vector[],int n){
	int *vector1,*vector2,n1,n2,x,y;
	if(n>1){
		if(n%2==0){
			n1=n2=(int)n/2;
		}else{
			n1=(int)n/2;
			n2=n1+1;
		}
		vector1=(int*)malloc(sizeof(int)*n1);
		vector2=(int*)malloc(sizeof(int)*n2);
		for(x=0;x<n1;x++){
		 vector1[x]=vector[x];
		}
		for(y=0;y<n2;y++){
			vector2[y]=vector[x];
		}		
		Mezcla(vector1,n1);
		Mezcla(vector2,n2);
		Mezclar(vector1,n1,vector2,n2,vector);
		free(vector1);
		free(vector2);
	}
}
void Mostrar_Vector(int vector[],int n){
	printf("Mostrando Vector Ordenado:\n");
	for(int i=0;i<n;i++){
		printf("%d\n",vector[i]);
	}
}

