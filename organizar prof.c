#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int aux[3],var[4];
    var[0] = 111;
    var[1] = 7;      //valores das vars
    var[2] = 41;
    var[3] = 91;
    int cont,tam;
    cont = 0;
    tam = 4;
    
    while (cont!=tam) {
   
    aux[1]=var[cont];
    aux[2]=var[cont+1];
        
        printf("%d\n",var[cont]);
    printf("%d\n",var[cont+1]);
        getchar();
        if (aux[1]>aux[2] && cont!=tam) {
            
        var[cont]=aux[2];
        var[cont+1]=aux[1];
            printf("%d\n",var[cont]);
    printf("%d\n",var[cont+1]);
        getchar(); 

        }
    cont++;       
    }
    printf("%d\n",var[0]);
    printf("%d\n",var[1]);
    printf("%d\n",var[2]);
    printf("%d\n",var[3]);
}
