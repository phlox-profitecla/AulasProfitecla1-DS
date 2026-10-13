#include <stdio.h>
#include <stdlib.h>

int main() {

    int escolha,palpite;

    printf("Número para advinhar (1-1000):\n");
    while (escolha > 1000,escolha < 1)
    scanf("%d",&escolha); 
    
    {printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    } //paragrafos

    
int qpalp;
    qpalp = 10;
    
    printf("Advinha o número entre 1-1000:\n");
    
        while(palpite != escolha) {

    scanf("%d",&palpite);
    
    if (palpite == escolha) {
        
        printf("\nAcertaste!");

        
    } else if (palpite > escolha) {

    printf("Menor.\n");
        qpalp --;
        
    }
        
        else {
            
        printf("Maior.\n");
            qpalp --;
            
        }
            printf("\nTentativas Restantes:%d\n",qpalp);
    } 
// ultima atualização - 13/10/26 - 15:25
}

    } 

}
