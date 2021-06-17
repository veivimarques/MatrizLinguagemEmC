//Exercicio4ListaMatriz

int main(){
	
	float mA[3][6];
	int i, j;
	
	puts("Numeros para preencher matriz:");
	for(i=0; i<3; i++){
		for(j=0; j<6; j++){
			printf("Linha %d - Coluna %d = ", i+1, j+1);
			scanf("%d", &mA[i][j]);
		}
	}
	for(i=0; i<3; i++){
		for(j=0; j<6; j++){
		if(j==j%2==1){
			printf(".");
		}
		}
	}

}
