#include <stdio.h>
#include <stdlib.h>

int main() {

    int escolha,palpite;

    printf("Número para advinhar:\n");
    scanf("%d",&escolha); //min max?

    printf("Advinha o número entre 1-1000:\n");
    scanf("%d",&palpite);
    
    if (palpite == escolha) {
        printf("acertaste");
    } else
        printf("erraste");
    

}
