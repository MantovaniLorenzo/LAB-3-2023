#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int dim;
	int* v1, * v2;

	printf("Inserisci la dimensione dei vettori: ");
	scanf("%d", &dim);

	v1 = (int*)malloc(dim * sizeof(int));
	v2 = (int*)malloc(dim * sizeof(int));

	printf("Inserisci i valori da mettere nel primo vettore: \n");

	for (int i = 0; i < dim; i++)
		scanf("%d", &v1[i]);

	printf("Inserisci i valori da mettere nel secondo vettore: \n");

	for (int j = 0; j < dim; j++)
		scanf("%d", &v2[j]);


	/* Ciclo annidato che scorre un elemento di V1 poi tutti gli elementi di V2 poi passa a un
	altro elemento di V1 e poi di nuovo tutti gli elementi di v2 e cosi via.*/

	int flag = 0;

	for (int i = 0; i < dim; i++) {

		for (int j = 0; j < dim; j++) {

			if (v1[i] == v2[j]) {   // Se viene rilevato lo stesso elemento la flag si aggiorna 
				flag++;
				v2[j] = 0;   // azzera l'elemento cosi può essere presente due volte, in quanto una volta che lo trova cambia valore ma ha già aggiornato la flag cosi se si trova un altra volta non lo scambia per quello di prima // soluzione nel sonno
			}
		}

	}

	if (flag == dim) {  // se sono presenti gli stessi elementi allora il numero di flag dovrà essere uguale al numero di elementi
		printf("I vettori contengono gli stessi elementi. \n");
	}
	else printf("I vettori non contengono gli stessi elementi. \n");


	return 0;
}