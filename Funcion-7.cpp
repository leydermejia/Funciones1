#include <stdio.h>
/*Comentario
Funcion que tiene un parametro en numero entero y seis parametros de referencia
en numero entero nombrados cien, cincuenta, veinte, diez, cinco y uno. Considera
el valor entero transmitido como una cnatidad en dolares y convertir el valor en 
el numero menor de billetes equivalentes.
Fecha:20-Septiembre-2017
Elaborado por: Leyder Londoño Mejia*/

int cambio(int valor, int &c100, int &c50, int &c20, int &c10, int &c1);

int main()
{
	int valor;
	int cien;
	int cincuenta;
	int veinte;
	int diez;
	int uno;
	printf("Ingrese valor:\n");
	scanf("%d",&valor);
	cambio(valor, cien, cincuenta, veinte, diez, uno);
	
	printf("<<<Cantidad de billetes>>>\n");
	printf("Billetes de 100==>%d \n",cien);
	printf("Billetes de 50==>%d \n",cincuenta);
	printf("Billetes de 20==>%d \n",veinte);
	printf("Billetes de 10==>%d \n",diez);
	printf("Billetes de 1==>%d \n",uno);	
	return 0;
}

 int cambio(int valor, int &c100, int &c50, int &c20, int &c10, int &c1)
 {
	c100=valor/100;
	valor%=100;
	c50=valor/50;
	valor%=50;
	c20=valor/20;
	valor%=20;
	c10=valor/10;
	valor%=10;
	c1=valor/1;
	valor%=1;
	
	return c100,c50,c20,c10,c1;	
 }
