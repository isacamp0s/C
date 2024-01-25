#include <stdio.h>

int main(){
    int quant = 0;
    int soma = 0;
    int num, media;
    
    do {
        printf("Digite um número maior que 0 ou 0 para encerrar: \n");
        scanf("%d", &num);
        quant++;
        soma += num;
        
        if (num == 0){
            break;
        }
        
    } while (num > 0);
    
    media = soma / quant;
    printf("MEDIA : %d\n", media);
    printf("QUANTIDADE : %d\n", quant);
    
    return 0;
}
