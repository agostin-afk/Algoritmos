#include <stdio.h>

int main(){
	int n;
	printf("digite o tamanho dos dois vetores: ");
	scanf("%d", &n);
	int v[2][n];
	for(int i = 0; i < 2; i++){
		printf("preencha o vetor %d: \n", i + 1);
		for(int j = 0; j < n; j++){
			printf("elemento %d: ", j + 1);
			scanf("%d", &v[i][j]);
		}
	}
	int resultado = 0, temp = 1;
	for(int j = 0; j < n; j++){
		temp = 1;
		for(int i = 0; i < 2; i++){
			temp *= v[i][j];
		}
		resultado += temp;
	}
	printf("resultado: %d", resultado);
	return 0;
}
