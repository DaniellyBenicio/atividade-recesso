//leia um array com 10 numeros inteiros e substitua todos os valores pares por 1 e os impares por -1.


#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Substituindo os n�meros pares por 1 e os �mpares por -1\n\n");
	
	int v[10];
		
	for(int i=0; i<10; i++){
		printf("\nDigite o %d� n�mero: ", i+1);
		scanf("%d", &v[i]);
		if(v[i]%2==0){
			v[i]= 1;
		} else {
			v[i]= -1;
		} 
	}
	
	printf("\nOs n�meros foram substitu�dos por: \n");
	
	for(int i=0; i<10; i++) {
    	printf("%d\t", v[i]);
	}
	
	return 0;
}
