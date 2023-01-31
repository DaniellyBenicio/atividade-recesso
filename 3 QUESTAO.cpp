//leia um array com 10 numeros reais e imprima somente aqueles cujo indice sao pares.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Números pares existentes entre 10 números\n\n");
	
	int v[10];

		
	for(int i=0; i<10; i++){
		printf("\nDigite o %dº número: ", i+1);
		scanf("%d", &v[i]);
	}
	
	printf("\nOs números pares informados são:\n\n");
	
	for(int i=0; i<10; i++){
		if(v[i]%2==0){
			printf("%d\n\n", v[i]);		
		}
	}	
	
	return 0;
}
