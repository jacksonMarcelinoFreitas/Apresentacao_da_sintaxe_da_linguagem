
#include <stdlib.h>
#include <stdio.h>
#include <locale.h> //Biblioteca - LOCALE - Acentua��o

//MAIN - Fun��o / M�todo principal do programa.
int main() {
	int teste=2;
	setlocale(LC_ALL,"Portuguese"); //SETLOCALEServe para exibir a acentua��o no texto
	printf("\n Teste de exibi��o de texto com acentua��o!!! - %d", teste); // Igual o COUT
	return 0;
	
}


