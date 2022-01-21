#include<iostream>

using namespace std;

float mediaValorVetor(int vetor[], int tamanho = 0){
	float soma = 0;
	for (int i = 0; i < tamanho; i++){
		soma += vetor[i];
	}
	return soma / tamanho; 
}

int main(){
	
	int vetor[] = {1,2,3,4,5,6,7,8};
	float media;
	media = mediaValorVetor(vetor, 5);
	cout << "media: " << media;
	
	return 0;  
}
