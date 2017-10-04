#include <stdio.h>
/*Comentario
Funcion que dada una matriz y un numero de fila de la matriz, devuelve el menor
de los elementos almacenados de dicha fila.
Fecha:25-Septiembre-2017
Elaborado por: Leyder Londoño Mejia*/

int llenando_matriz(int matriz[100][100], int f, int c);
int matriz[100][100],f,c;
int main()
{
	int matriz[100][100],f,c;
	llenando_matriz(matriz,f,c);
	return 0;
}
int llenando_matriz(int matriz[100][100], int f, int c){
	printf("Ingrese numero de filas \n ");
	scanf("%d",&f);
	printf("Ingrese numero de columnas \n");
	scanf("%d",&c);
	printf("Ingrese elementos de la matriz \n");
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&matriz[i][j]);
		}
	}
	printf("Mostrando Matriz\n");
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			printf("%d",matriz[i][j]);
		}
		printf("\n");
	}	
}

