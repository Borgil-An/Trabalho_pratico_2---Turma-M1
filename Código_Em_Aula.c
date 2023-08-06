#include <stdio.h>
#include <stdlib.h>

int fillCups(int* amount, int amountSize);

int main(void){
    //int *amount[1];
    int v[3]= {5,0,0};
    int amountSize = 3;
    int teste;
	
	//amount[0] = v;
    
    teste = fillCups(v,amountSize);
    printf ("%d", teste);
    return 0;
}

int fillCups(int *amount, int amountSize)
{
    int r = 0;
    int frio,quente,morno;
    int c = 0;

    frio = amount[0];
    quente = amount[1];
    morno = amount[2];

for (int x = 0; x < amountSize;x++){
        if (amount[x] > 0){
            c++;
        }
    }
if (c == 1){
    r = (frio + quente + morno);
   
    
}
else if ( c == 2 ){
    r = (frio+quente+morno)/2;
    if (r<2){
        r = r/0.5;
    }
}

else if ( c== 3){
   r = (frio/2)+(quente/2)+(morno/2)+1; 
}
return r;
}
