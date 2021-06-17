//Exercicio1ListaMatriz

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void matriz(int mA[5][5]);
void pesquisaMatriz(int mA[5][5]);

int main(){
	int mA[5][5];
	
	matriz(mA);
	pesquisaMatriz(mA);	
	
}

void matriz(int mA[5][5]){
	int i, j;
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			mA[i][j] = rand()%10;
		}
	}
}

void pesquisaMatriz(int mA[5][5]){
	int i,j,x, cont=0, opcao;
	do{
	printf("\n");
	printf("\tNumero a ser pesquisado:\n");
	scanf("%d", &x);
	printf("\n");
	printf("\tPosicao dentro da Matriz [L][C]\n");
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			if (x==mA[i][j]){
								
				printf("[%d][%d]\t\n", i, j);
			}else cont++;			
			
	printf("\tMatriz.\n");
	printf("\n");
		for( i=0; i<5;i++){
			for(j=0;j<5;j++){
				printf("%d\t", mA[i][j]);
			}
			printf("\n");
	}
	if (cont == 25)
		printf("\tNao encontrado!\n");
	printf("\tDeseja pesquisar outro numero? 1 - sim, 0 - nao \n");
	scanf("%d", &opcao);
	} while (opcao == 1);
		
}
}
}

