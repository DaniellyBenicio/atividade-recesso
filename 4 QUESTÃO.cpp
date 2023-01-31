//leia um array com 10 numeros reais e ordene-os em ordem crescente

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Ordem crescente de 10 números reais\n\n");
	
	float v[10], auxiliar;
	
	for(int i=0; i<10; i++){
		printf("Digite o %dº número: ", i+1);
		scanf("%f", &v[i]);		
	}
	
	for(int i=0; i<10; i++){
		for(int x=i; x<10; x++){
			if(v[i]>v[x]){
				auxiliar = v[i];
				v[i] = v[x];
				v[x] = auxiliar;
			}
		}
		printf("%.2f\n", v[i]);
	}
	
	return 0;	
}
