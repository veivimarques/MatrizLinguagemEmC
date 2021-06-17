//Exercicio3ListaMatriz

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
    const int coluna=3;
    char mat[5][10];
    int i,j, s1=0,s2=0,s3=0,s4=0,s5=0, res[5], a=0;
    char vet[10];

    for(i=0;i<5;i++){
        for(j=0;j<10;j++){
            printf("Resposta do %d aluno: ", i+1);
            scanf("%c", &mat[i][j]);
            fflush(stdin);
        }
    }

    for(j=0;j<10;j++){
        printf("Gabarito [%d]: ",j);
        scanf("%c", &vet[j]);
        fflush(stdin);
    }

for(i=0;i<5;i++){
    for(j=0;j<10;j++){
        if(mat[0][j]==vet[j]){
            s1++;
            res[0]=s1;
        }
        if(mat[1][j]==vet[j]){
            s2++;
            res[1]=s2;
        }
        if(mat[2][j]==vet[j]){
            s3++;
            res[2]=s3;
        }
        if(mat[3][j]==vet[j]){
            s4++;
            res[3]=s4;
        }
        if(mat[4][j]==vet[j]){
            s5++;
            res[4]=s5;
        }
    }
}

    for(i=0;i<5;i++){
        printf("%d ,", res[i]);
    }

system("pause");
return 0;
}
