#define N 10
#define _CRT_SECURE_NO_WARNINGS
#define INT_MIN
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>



int main(void) {

	int v[N];

	printf("Inserisci 10 valori, ad ogni valore premi invio: \n");

	for (int i = 0 ; i < N; i++) {
		scanf("%d", &v[i]);
	}

	printf("I valori inseriti nel vettore sono: ");

	for (int j = 0; j < N; j++) {
		printf("%d ", v[j]);
	}

	printf("\n");


	int sum = 0;

		for (int x = 0; x < N; x++) {
			sum += v[x];
		}

		float media = (float)sum / N;

		printf("La media dei valori inseriti nel vettore e': %.2f \n", media);

		int max = INT_MIN;
		int pos;

		for (int y = 0; y < N; y++) {

			if (v[y] > max) {
				max = v[y];
				pos = y;
			}
		}



		printf("Il max all'interno del vettore e' %d e si trova nella posizione %d ", max, pos +1); 

		for (int z = 0; z < N; z++) {
			if (v[z] == max && z != pos) {
				printf("%d ", z + 1);
			}

		}



	return 0;
}