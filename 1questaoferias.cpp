//leia um array com 10 numeros inteiros e imprima todos os numeros pares de tras para frente. Por exemplo, se os numeros forem: 
//2,4,6,5,3,2,5,8,9,1 voce deve imprimir 8,2,6,4,2.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("N�meros pares existentes entre 10 n�meros\n\n");
	
	int v[10];

	for(int i=0; i<10; i++){
		printf("Digite %d� valor: ", i+1);
		scanf("%d", &v[i]);
		
	}
	
	printf("Os n�meros pares digitados de tras para frente: \n");
	
	for(int i=9; i>=0; i--){
		if(v[i]%2==0){
			
			printf("%d\t", v[i]);
		}
	}
	
	return 0;
}
