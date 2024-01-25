#include <stdio.h>

int main(){
    int num;
    
    printf("--- Menu ---\n");
    printf("0 - ver sorriso\n");
    printf("1 - ver coração\n");
    printf("Digite sua opção: \n");
    scanf("%d", &num);
    
    if (num == 0){
        printf(" = )\n");
    }
    else if (num == 1){
        printf(" <3\n");
    }
    else{
        while (num != 0 && num != 1){
            printf("Número inválido. Tente novamente: \n");
            scanf("%d", &num);
            if(num == 0){
                printf(" = )\n");
                break;
            }
            if (num == 1){
                printf(" <3\n");
                break;
            }
        }  
    }
    
    return 0;
}