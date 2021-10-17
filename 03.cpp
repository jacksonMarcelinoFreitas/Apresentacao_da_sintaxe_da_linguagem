#include <stdlib.h>
#include <stdio.h>
#include <locale.h> // --> LOCALE Biblioteca serve para exibir acentua��o no texto
#include <iostream>

//Prototipo da fun��o

void menu();
void soma();
void subtracao();
void multiplicacao();
void divisao();

//Main -> A fun��o/m�todo principal do programa
int main() 
{
	setlocale(LC_ALL, "Portuguese"); // --> SETLOCALE serve para exibir acentua��o no texto
	menu(); //Chama o m�todo menu
	
	return 0;
}

//VOID n�o necessita retornar nenhuma valor ao chamar a fun��o
void menu()
{
	int opcao;
	do{
		system("cls");
		printf("Bem vindo a calculadora do 1� semestre de Sistemas: ");
		printf("\n\t 1 - Soma");
		printf("\n\t 2 - Subtra��o");
		printf("\n\t 3 - Multiplica��o");
		printf("\n\t 4 - Divis�o");
		printf("\n\t 0 - Sair");
		
		printf("Selecione a op��o desejada: ");
		
		scanf("%d%*c", &opcao);
		
		switch(opcao){
			case 1:
				soma();
				break;
			case 2:
				subtracao();
				break;
			case 3:
				multiplicacao();
				break;
			case 4:
				divisao();
				break;
			default:
				printf("\n Digite uma opcao valida!");
				break;
		}
	}while(opcao != 0);
}

void soma()
{
	printf("Informe o primeiro valor");
	scanf("%d, &numero1);
	system("cls");
	int soma = 2 + 10;
	printf("O resultado da soma �: %d", soma);
	system("pause");
}

void subtracao(){
	//Implementar fun��o
}

void multiplicacao(){
	//Implementar fun��o
}

void divisao(){
	//Implementar fun��o	
}

