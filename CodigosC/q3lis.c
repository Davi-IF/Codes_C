#include<stdio.h> // question 3

void Verificacao(int n1){

	
	if(n1 % 2 == 0){
		printf("par!");
	} 
	else{
		printf("impar!");
	}
}

int main () {
	int n;
	
	printf("digite um valor:");
	scanf("%i", &n);
	
    Verificacao(n);

}
