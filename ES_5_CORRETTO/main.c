#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int main(void) {

	int* v, * v_flag;
	int dim;

	printf("Inserisci la dimensione del vettore: ");
	scanf("%d", &dim);

	v = (int*)malloc(dim * sizeof(int));
	v_flag = (int*)calloc(dim, sizeof(int));

	if (v == NULL || v_flag == NULL) {
		printf("ERRORE DI ALLOCAZIONE");
		exit(EXIT_FAILURE);
	}



	for (int i = 0; i < dim; i++) {
		printf("Inserisci un valore: ");
		scanf("%d", &v[i]);
	}



	for (int i = 0; i < dim; i++) {

		int count = 1;

		if (v_flag[i] != 1) {
			for (int j = i + 1; j < dim; j++) {
				if (v[i] == v[j]) {
					count++;
					v_flag[j] = 1;
				}
			}
			printf("Il numero %d e' contenuto %d. \n", v[i], count);

		}

	
	}
	return 0;
}
