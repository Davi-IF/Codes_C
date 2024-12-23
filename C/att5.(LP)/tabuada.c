#include<stdio.h> 
void tabuada (int option, int numero){
    int i;
    
    for(i=1; i<=10; i++){
        switch (option){
            case 1:
                printf("%i + %i = %i\n ", numero, i, numero + i);
               break;
            case 2:
                printf("%i - %i = %i\n ", numero, i, numero - i);
                 break;
            case 3:
                printf("%i x %i = %i\n", numero, i, numero * i);
                 break;
            case 4: 
                 if(i != 0){
                     printf("%i / %i = %.2f\n ", numero, i, (float)numero / i);
                }else{
                    printf("impossible!");
                }
                break;
            default:
                printf("invalid option\n"); break;
        }
    } 
}

int main() {

    int op=0, num=0;
  
    while (op != 5){

        printf("MENU:\n");
        printf("1 - addition\n");
        printf("2 - subtraction\n");
        printf("3 - multiplication\n");
        printf("4 - division\n");
        printf("5 - exit\n");
        
        printf("type your option: ");
        scanf("%i", &op);

        if (op == 5){
            printf("exiting...");
        }
        if(op >= 1 && op <=4){
            printf("type a number to see the table:\n");
            scanf("%i",&num);

            tabuada(op, num);
        }
        else{
            printf("invalide. try again. \n");
        }
     
    }        return 0;

}

