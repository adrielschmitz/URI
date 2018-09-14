#include <stdio.h>

	int main(){
	int valorentrada, horas, horasemsegundos, minutos, segundos;
	
	scanf ("%d", &valorentrada);

	horasemsegundos = 3600; // a variavel horasemsegundos recebera 3.600, 1h contem 3.600 segundos
	horas = (valorentrada/horasemsegundos); // para transformar horas em segundos, divide-se entao por 3.600
	minutos = (valorentrada - (horasemsegundos*horas))/60; /* para transformar minutos em segundos, 
	tem que dividir por 60, pois 1minuto tem 60 segundos */ 
	segundos = (valorentrada - (horasemsegundos*horas) - (minutos*60)); // aqui o segundos receberá as horas convertidas e jogará na variavel

	printf ("%d:%d:%d\n", horas, minutos, segundos);

	return 0;

}