//Exercicio2ListaMatriz

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define I 4
#define J 4

int main(){
	int mA[I][J], mB[I][J], i, j;
	
	for (i=0; i<I; i++){
		for (j=0; j<J; j++){
			mA[i][j] = rand() % 20;
			mB[i][j] = mA[i][j];
		}
	}
	
	for (i=0; i<I; i++){
		for (j=0; j<J; j++){
			if (i<j)
				mB[i][j] = 0;
		}
	}
	
	printf("Matriz original\n");
	for (i=0; i<I; i++){
		for (j=0; j<J; j++){
			printf("%d\t", mA[i][j]);
		}
		printf("\n");
	}
	
	printf("Matriz triangular inferior\n");
	for (i=0; i<I; i++){
		for (j=0; j<J; j++){
			printf("%d\t", mB[i][j]);
		}
		printf("\n");
	}
}
