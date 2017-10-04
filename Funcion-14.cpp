#include <stdio.h>
/*Comentario 
Funcion que determina si una funcion es simetrica o no;
Fecha:25-Septiembre-2017
Elaborado por: Leyder Londoño Mejia*/

int matriz_simetrica(int matriz[100][100],int f, int c);

int main() 
{
	int matriz[100][100],f,c;
    matriz_simetrica(matriz,f,c);
	return 0;
}
int matriz_simetrica(int matriz[100][100],int f, int c){
	int r;
    printf("Ingrese numero de filas:\n");
    scanf("%d",&f);
    printf("Ingrese numero de columnas:\n");
	scanf("%d",&c);
	
    printf("Ingrese elementos de la matriz:\n");
    for(int i=0;i<f;i++){
	    for(int j=0;j<c;j++){
		scanf("%d",&matriz[i][j]);
	}		
}	
  if(f==c){
	for (int i=0;i<f;i++){
		for (int j=0;j<c;j++){				
			if(matriz[i][j]==matriz[j][i]){
				r=1;
			}	
		}	
	}
}
if (r==1){
	printf("La matriz es Simetrica");		
}else{
	printf("La matriz NO es Simetrica");
}

}
