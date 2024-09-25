#include<stdio.h>

int main(void){
	
	int A, B, C;
	
	printf("digite valor de A:");
	scanf("%i", &A);
	printf("digite o valor de B:");
	scanf("%i", &B);
	printf("digite o valor de C:");
	scanf("%i", &C);
	
	
	
		if(A<B && B<C){
			printf(" %i, %i, %i", A, B, C);
		}
	else{
		if(A<C  && B>C ){
			printf(" %i %i %i", A, C, B);
		}
	else{
		if(A<B && A>C){
			printf(" %i %i %i", C, A, B);
		}
	else{
		if(A>B && B<C){
			printf(" %i %i %i ", B, A, C);
		}
	else{
		if(C<B && B<A){
			printf(" %i %i %i", C, B, A );	
		}

		return 0;
				}
			}
		}
	}
}
