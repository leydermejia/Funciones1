#include <stdio.h>
/*Comentario
Funcion que tenga un parámetro en número entero llamado totalSeg y tres parámetros de referencia enteros nombrados horas, min y seg. La función es convertir el número de segundos transmitido en un número equivalente de horas, minutos y segundos
Fecha: 25-09-17
Elaborado por: Leyder Londoño Mejia*/

void calcular(int totaldias, int anio, int mes, int dia, int &a, int &m, int &d);

int main() {
	int totaldias,anio,mes,dia,a,d,m;
	a=30;
	d=40;
	m=50;
	printf("Ingrese la cantidad de dias \n");
	scanf("%d",&totaldias);
	
	calcular(totaldias, anio, mes, dia,a,d,m);
	
	printf("La fecha es: \n %d dia:%d mes:%d ano \n",d,m,a);
	return 0;
}
void calcular(int totaldias, int anio, int mes, int dia, int &a, int &m, int &d)
{
	int valor;
    a=2000;
	d=1;
	m=1;
	
	anio=totaldias/365;
	valor=totaldias-(anio*365);
	mes=valor/30;
	dia=valor-(mes*30);
	
	a+=anio;
	d+=dia;
	m+=m;
}
