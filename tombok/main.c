#include <stdio.h>

int main(void) {
	double tomb[10] = { 2.9, -69, 420, -11, -5.7, 0.6, 2.9, -10, -2.3, 11 };
	printf("Osszesen 10 szam van.\n\n");
	int l = 0;


	for (int i = 0; i < 10; i += 1) {
		printf("[%d]=%.2f ", i, tomb[i]);
		if (tomb[i] < 0) {
			l += 1;
		}
	}


	int negativak[l];
	for (int i = 0, l = 0; i < 10; i += 1)
		if (tomb[i] < 0) {
			negativak[l] = i;
			l += 1;
		}

	printf("\n\n");

	printf("Ebbol %d szam negativ.\n\n", l);

	for (int i = 0; i < l; i += 1)
		printf("[%d]=%.2f ", negativak[i], tomb[negativak[i]]);

	return 0;
}
