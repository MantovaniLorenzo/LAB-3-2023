#define _CRT_SECURE_NO_WARNINGS
#define INT_MIN
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int main(void) {

	int* v;
	int dim;

	printf("Inserisci la dimensione del vettore: ");
	scanf("%d", &dim);

	v = (int*)malloc(dim * sizeof(int));



	for (int i = 0; i < dim; i++) {
		printf("Inserisci un valore: ");
		scanf("%d", &v[i]);
	}

	int flag;
	
	for (int i = 0 ; i < dim; i++) {

		flag = 0;

		for (int j = i+1; j < dim; j++) {

			if (v[i] == v[j]) {
				flag++;
				v[j] = (INT_MIN -1); // una volta controllati gli elementi trasformo gli elementi doppi in un elemento che l'utente non può inserire cosi da poter usarlo come controllo
			}
		}
	
		if (v[i] != (INT_MIN -1)) {  // stampo tutti i valori diversi dall'elemento fallace che ho modificato (solamente i valori ripetuti avranno quel valore e quindi non verranno stampati)
			printf("L'elemento %d e' contenuto %d volte.\n", v[i], flag + 1);
		}
	


	}

	return 0;
}