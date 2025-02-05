#include<stdio.h>
#include<string.h>

int main (){

    char name[50];
    char surname[50];

    printf("type your name:");
    fgets(name, sizeof(name), stdin);

    sscanf(name, "%s", surname);

char *last_name = strrchr(name, ' ');

if(last_name != NULL){
    strcpy(surname, last_name+1);

}else{
    strcpy(surname, " ");
}
    printf("Nome: %s\n", name);
    printf("Sobrenome: %s\n", last_name);

    return 0;


}