#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int i= 0, j=0, dim, tmp;   // tmp variabile temporanea per capire in che vettore inserirla
	int* v1, *v2;

	printf("Inserisci il numero di elementi dei vettori: ");
	scanf("%d", &dim);

	v1 = (int*)malloc(dim * sizeof(int));
	v2 = (int*)malloc(dim * sizeof(int));

	if (v1 == NULL || v2 == NULL) {
		printf("ERRORE DI ALLOCAZIONE");
		exit(EXIT_FAILURE);
	}

	

	while (i < dim || j < dim) {// quando tutti e due sono pieni mentre --> (i < dim && j < dim)  due indici per due vettori diversi appena uno dei due si completa esce

		printf("Inserisci un valore intero: \n");
		scanf("%d", &tmp);


		if ( i < dim && (tmp > 0 || (tmp < 0 && (tmp % 5== 0)))) {  // condizioni per inserire l'elemento   
			v1[i] = tmp;                                            // la condizione sulla i SERVE in modo tale che se questo vettore è già pieno non vengono comunque inseriti eventuali valori che soddisfano la condizione mentre l'altro vettore si deve riempire
			i++;  // se l'elemento rispetta incremento j in modo da vedere se arriverà a completare il vettore

		} else if (j < dim && (tmp % 2 != 0 && (tmp % 3 == 0))) {  // condizioni per inserire l'elemento, volendo si potrebbe omettere la prima parte [tmp < 0 && (tmp % 5 != 0 &&] della condizione in quanto è gia la negazione della prima condizione, quindi si può far partire la condizione da tmp % 2 etc.
			v2[j] = tmp;                                           // la condizione sulla j SERVE in modo tale che se questo vettore è già pieno non vengono comunque inseriti eventuali valori che soddisfano la condizione mentre l'altro vettore si deve riempire                         
			j++;      // se l'elemento rispetta incremento j in modo da vedere se arriverà a completare il vettore 
		}

	}
	 
	printf("Il programma e' terminato. \n");

	
	printf("V1 contiene i seguenti elementi: ");

	//stesso discorso del commento sotto

	for (int x = 0; x < i; x++) {
		printf("%d ", v1[x]);
	}

	printf("\n");

	printf("V2 contiene i seguenti elementi: ");  
	
	// la dim del vettore è uguale a j perchè  è il numero di elementi messi in quanto si incrementa solo se l'elemento viene inserito sennò no
	for (int y = 0; y < j; y++) {
		printf("%d ", v2[y]);
	}
	
	printf("\n");

	return 0;


}

