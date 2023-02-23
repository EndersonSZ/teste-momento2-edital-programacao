//Escreva um programa que lê 2 matrizes A e B, cada uma com 3 linhas e 2 colunas. 
//Construir uma matriz C de mesma dimensão (3x2) onde C é formada pela soma dos elementos da matriz A com os elementos da matriz B 
//(exemplo: C[1][1] = A[1][1] + B[1][1]). Apresentar ao final as 3 matrizes (A, B e C).

#include <locale.h>

int main(){
	
	int l, c;
	int mat1[3][2]={1,2,3,4,5,6} , mat2[3][2]={1,2,3,4,5,6}, mat3[3][2]={1,2,3,4,5,6};
	
	for(l=0; l<3; l++){
		for(c=0; c<2; c++){
		
			mat3[l][c] = mat1[l][c] + mat2[l][c];
		}
	}
	
	//exibir valores
	for(l=0; l<3; l++){
		for(c=0; c<2; c++){
			printf("%2d ",mat3[l][c]);
			printf("\n");
		}
	}
	
}
