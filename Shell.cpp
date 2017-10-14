#include <stdio.h>
/*Comentario
Metodo de ordenamiento shell
Fecha: 14 octubre 2017
Elaborado por: Leyder Londo�o Mejia*/

void shell( int vector[], int n);
void Mostrar_Vector(int vector[],int n);

int main()
{	
	int tam;
	
	printf("Ingrese Longitud del vector:\n");
	scanf("%d",&tam);
	int vector[100];
	
	printf("Ingrese elementos del vector:\n");	
	for (int i=0;i<tam;i++)
	{
		scanf("%d",&vector[i]);
	}
	shell(vector,tam);
	Mostrar_Vector(vector,tam);
	
	return 0;
}

void shell( int vector[], int n)
{	
	int intervalo,i,aux;
	bool band;
	
	intervalo=n;
	while(intervalo>1)
	{
		intervalo=(intervalo/2);
		band=true;
		
		while(band==true)
		{
			band=false;
			i=0;
			while((i+intervalo)<=n)
			{
				if(vector[i]>vector[i+intervalo])
				{
					aux=vector[i];
					vector[i]=vector[i+intervalo];
					vector[i+intervalo]=aux;
					band=true;
				}
				i++;
			}
		}
	}	
}

void Mostrar_Vector(int vector[],int n)
{
	printf("Mostrando Vector Ordenado:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",vector[i]);
	}
}
