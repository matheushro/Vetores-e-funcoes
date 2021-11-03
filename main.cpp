#include<iostream>
#include <cstdlib>
#include <ctime> 
#define TAMANHO_VETOR 5
#include "funcoes.h"


int main(){
	int soma_linha[TAMANHO_VETOR] = {0,0,0,0,0};
	int soma_coluna[TAMANHO_VETOR] = {0,0,0,0,0};
	int soma_principal = 0;
	int soma_secundaria = 0;
	int vetor[TAMANHO_VETOR][TAMANHO_VETOR];
	
	srand(time(NULL));
	for(int i = 0; i < TAMANHO_VETOR; i++){
		for(int j = 0; j < TAMANHO_VETOR; j++){
			vetor[i][j] = rand() % 10;
		}
	}
	std::cout << "------------------TABELA------------------" << "\n";
	for(int i = 0; i < TAMANHO_VETOR; i++){
		for(int j = 0; j < TAMANHO_VETOR; j++){
			std::cout << vetor[i][j] << " | ";
		}
		std::cout << std::endl;
	}
	
	funcao_soma_linha(soma_linha, vetor);
	for(int i = 0; i < TAMANHO_VETOR; i++){
		std::cout << soma_linha[i] << "\n";
	}
	
	funcao_soma_coluna(soma_coluna, vetor);
	for(int i = 0; i < TAMANHO_VETOR; i++){
		std::cout << soma_coluna[i] << "\n";
	}
	
	funcao_soma_principal(soma_principal, vetor);
	std::cout << soma_principal << "\n";
	
	funcao_soma_secundaria(soma_secundaria, vetor);
	std::cout<< "\n"<< soma_secundaria << "\n";
}
