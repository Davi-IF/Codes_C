#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main(){

    char A[50];
    char B[50];
    int i,j;


    printf("type first phrase:");
    fgets(A, sizeof(A), stdin);

    printf("tyhpe second phrase:");
    fgets(B, sizeof(B), stdin);
 
    for( i=0; i<strlen(A); i++){
        if(toupper(A[i]) =='A'){
            A[i] = '*';
        }      
    }
    for( j=0; j<strlen(B); j++){
        if(toupper(B[j]) =='A'){
            B[j] = '*';
        }
    }
    for(i = strlen (A) - 1; i>= 0; i--){
        printf("%c", A[i]);
        }

    for(j = strlen (B) - 1; j>= 0; j--){
        printf("%c", B[j]);
    }

 }


