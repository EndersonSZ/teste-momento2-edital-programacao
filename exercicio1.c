//Faça um programa que preencha um vetor com 6 valores distintos digitados pelo usuário. 
//Em seguida, exiba o maior e o menor valor do vetor, indicando em qual posição eles se encontram. 
//Depois, imprima os itens no vetor em ordem crescente.      



#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
   
  int a, b, vetor[6];
  int valor, aux, maior, menor,posVetMaior, posVetMenor;

	// lê valores do teclado e salva no vetor
    for(a = 0; a < 6; a++){
    	do{	
    
        printf("digite %d: ", a);
        scanf("%d", &valor);
        
        for(b=0;b<a;b++){
        	if(vetor[b] ==valor){
        		printf("Valor digitado já existe, insira um valor diferente:\n");
        		valor = -1;
        		break;
        		
			}
		}
    	
    	}while(valor == -1);
    	vetor[a] = valor;
    }
    
    for(a=0; a<6; a++){    
    	for(b=a+1; b<6; b++){
    		if(vetor[a] == vetor[b]){
    			printf("numero repetido! insira um numero diferente.");
			}
		}
	}
   
   
    //verificar maior valor
    maior = vetor[0];
    posVetMaior = 0;
    for(a = 0; a < 6; a++){
        if(vetor[a]> maior){
            maior = vetor[a];
            posVetMaior = a;
        }
        
    }   
    
    //Verifica o menor valor
    menor =  vetor[0];
    posVetMenor = 0;
    for(a=0;a<6;a++){
    	if(vetor[a] < menor){
    		menor = vetor[a];
    		posVetMenor = a;
		}
	} 
    
     //ordenação
    for(a=0; a<6; a++){
    	for(b=0; b<6-1; b++){
    		if(vetor[b] > vetor[b + 1]){
    				
        			aux = vetor[b];
        			vetor[b] = vetor[b+1];
        			vetor[b+1] = aux;
        			
				}
		}
	}
   
    //impressão das informações
    printf("\n maior valor: %i - posição: %i\n",maior, posVetMaior);
    printf("\n menor valor: %i - posição: %i\n",menor, posVetMenor);
  
  	 for(a=0; a<6; a++){
    	printf("-%d-\n",vetor[a]);
	}
	return 0;
}
