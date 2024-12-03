#include<stdio.h> 
#include<limits.h> // nova biblioteca

int main () {
        int a=0, b=0 , c=0;
        int menor=__INT_MAX__, maior = INT_MIN; // garante que va

        printf("digite o valor a: ");
        scanf("%i", &a);
        printf("digite o valor b: ");
        scanf("%i", &b);
        printf("digite o valor c: ");
        scanf("%i", &c);

        if(a>maior){
            maior = a;
        }
        if(b>maior){
            maior = b;
        }
        if(c>maior){
            maior = c;
        }
        if(a<menor){
            menor = a;
        }
        if(b<menor){
            menor = b;
        }
        if (c<menor){
            menor = c;
        }

        printf("o menor: %i, maior: %i", menor, maior);
        
        return 0;
}