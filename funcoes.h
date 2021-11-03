void funcao_soma_linha(int soma_linha[TAMANHO_VETOR], int vetor[TAMANHO_VETOR][TAMANHO_VETOR]){
	std::cout << "------------------SOMA LINHA------------------" << "\n";
	for(int i = 0; i < TAMANHO_VETOR; i++){
	    for(int j = 0; j < TAMANHO_VETOR; j++){
			soma_linha[i] = vetor[i][j] + soma_linha[i];
		}
	}
}


void funcao_soma_coluna(int soma_coluna[TAMANHO_VETOR], int vetor[TAMANHO_VETOR][TAMANHO_VETOR]){
	std::cout << "------------------SOMA COLUNA------------------" << "\n";
	for(int i = 0; i < TAMANHO_VETOR; i++){
		for(int j = 0; j < TAMANHO_VETOR; j++){
			soma_coluna[i] = vetor[j][i] + soma_coluna[i];
		}
	}
}


void funcao_soma_principal(int&  soma_principal, int vetor[TAMANHO_VETOR][TAMANHO_VETOR]){
	std::cout << "------------------SOMA PRINCIPAL------------------" << "\n";
	for(int i = 0; i < TAMANHO_VETOR; i++){
		for(int j = 0; j < TAMANHO_VETOR; j++){
			if(i == j){
				soma_principal = vetor[i][j] + soma_principal;
			}
		}
	}	
}


void funcao_soma_secundaria(int& soma_secundaria, int vetor[TAMANHO_VETOR][TAMANHO_VETOR]){
	std::cout << "------------------SOMA SECUNDARIA------------------" << "\n";
	for(int i = 0; i < TAMANHO_VETOR; i++){
		for(int j = 0; j < TAMANHO_VETOR; j++){
			if((TAMANHO_VETOR-1)-j==0){
				soma_secundaria += vetor[i][j];
			}
		}
	}		
}
