#include <stdio.h>
/*Comentario
Funcion que convierte el numero de segundos transmitido en horas, minutos y 
segundos.
Fecha:23-Septiembre-2017
Elaborado por: Leyder Londoño Mejia*/

int tiempo(int totalseg, int &horas, int &minutos, int &segundos);

int main() 
{
	int totalseg;
	int horas;
	int segundos;
	int minutos;
	printf("Ingrese cantidad de segundos: \n");
	scanf("%d",&totalseg);
	
	tiempo(totalseg,horas,minutos,segundos);
	
	printf("El tiempo total es: \n %d Horas:%d Minutos:%d Segundos \n",horas,minutos,segundos);
	return 0;
}

int tiempo(int totalseg, int &horas, int &minutos, int &segundos)
{
	int totalmin;
	
	totalmin=totalseg/60;
	segundos=totalseg-(totalmin*60);
	horas=totalmin/60;
	minutos= totalmin-(horas*60);
	
	return horas,minutos,segundos;	
}
