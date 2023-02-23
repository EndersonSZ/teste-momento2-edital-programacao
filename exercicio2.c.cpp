//Escreva um programa que, dada uma matriz 3x3, armazena em cada posição da matriz, a soma dos valores da linha e coluna que definem a posição. 
//Por exemplo, na posição [1][2] você deverá armazenar o valor 1+2 = 3 e assim por diante. Imprima a matriz na tela.

#include <stdio.h>
#include <locale.h>

int main(){
	
	int l, c, contL=0, contC=0;
	int valores[3][3];
	
	//leitura dos valores

	for(l=0; l<3; l++)
	{
		for(c=0; c<3; c++)
		{
			valores[l][c] = l + c;					
		}
				
	}
	
	for(l=0; l<3; l++)
	{
		for(c=0; c<3; c++)
		{	
			printf("\n");
			printf("%2d\n",valores[l][c]);					
		}
		
		
	}

	return 0;
}

