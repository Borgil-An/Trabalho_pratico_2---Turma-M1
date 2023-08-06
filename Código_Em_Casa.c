#include <stdio.h>
#include <stdlib.h>

int fillCups(int* amount, int amountSize);

int main(void){
    int v[3]= {5,0,0};
    int amountSize = 3;
    int teste;
	  
    teste = fillCups(v,amountSize);
    printf ("%d", teste);
    return 0;
}

int fillCups(int* amount, int amountSize) {
    int r = 0;
    int maiorValor = 0;

    for (int i = 0; i < amountSize; i++) {
        r += amount[i];
        if (amount[i] > maiorValor) {
            maiorValor = amount[i];
        }
    }

    r = (r + 1) / 2;
    if (r < maiorValor) {
        r = maiorValor;
    }

    return r;
}
