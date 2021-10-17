#include <iostream>

using namespace std;
int main() {
	
	int opcao;
	//inicia a execução do while
	do{
		system("cls");
		cout<< "Escolha um fruta pelo nome: " <<endl;
		cout<< "\t 1 - ... Mamao"<<endl;
		cout<< "\t 2 - ... Abacaxi"<<endl;
		cout<< "\t 3 - ... Laranja"<<endl;
		cin>> opcao;
		system("cls");
		cout<<"\t\t";
	//Executa a troca de valores pré determinada na variavel opcao
		switch(opcao)
		{
			case 1:
				cout<<"\t\t Voce escolheu mamao";
				break;
			case 2:
				cout<<"\t\t Voce escolheu abacaxi";
				break;
			case 3:
				cout<<"\t\t Voce escolheu Laranja";
				break;
			default:
				cout<< "\t\t A opcao desejada nao existe!";
				break;
		}
		system("pause");
	}while(opcao >= 1 && opcao <=3);
	
	return 0;
}
