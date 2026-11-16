#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int aux[3],var[3];
    int cont,tam;
    cont = 0;
    tam = 3;
    
    while (cont!=tam) {

    aux[1]=var[cont];
    aux[2]=var[cont+1];

        if (aux[1]>aux[2]) {
            
        var[cont]=aux[2];
        var[cont+1]=aux[1];
        }
    cont++;       
    }
}
