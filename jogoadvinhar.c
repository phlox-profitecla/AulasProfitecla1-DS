#include <stdio.h>
#include <stdlib.h>

int main() {

    int escolha,palpite;

    printf("Número para advinhar:\n");
    scanf("%d",&escolha); //min max?
    
    {printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    } //paragrafos

    
    
    printf("Advinha o número entre 1-1000:\n");
    
        while(1) {

    scanf("%d",&palpite);
    
    if (palpite == escolha) {
        
        printf("\nAcertaste!");
        break;
        
    } else if (palpite > escolha) {

    printf("Menor.\n");
        
    }
        
        else {
            
        printf("Maior.\n");
            
        }

    } 

}
