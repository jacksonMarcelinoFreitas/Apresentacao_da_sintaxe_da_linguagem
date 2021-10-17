
#include <stdlib.h>
#include <stdio.h>
#include <locale.h> //Biblioteca - LOCALE - Acentuação

//MAIN - Função / Método principal do programa.
int main() {
	int teste=2;
	setlocale(LC_ALL,"Portuguese"); //SETLOCALEServe para exibir a acentuação no texto
	printf("\n Teste de exibição de texto com acentuação!!! - %d", teste); // Igual o COUT
	return 0;
	
}


