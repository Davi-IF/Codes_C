#include<stdio.h>	 // em andamento //
#include<math.h>		

	int main(void){
		
	int N1, N2, N3;
	
		printf("valor N1:");
			scanf("%i", &N1);
		printf("valor N2:");
			scanf("%i", &N2);
		printf("valor N3:");
			scanf("%i", &N3);
		
		
		if (N1<N2 && N1<N3 && N3>N2){
			printf("%i, %i, %i", N1, N2, N3);
		}
		else if(N1>N2 && N1>N3 && N2>N3){
			printf("%i, %i, %i", N3, N2, N1);
		}
		else if(N3>N1 && N3> N2 && N1>N2){
				printf("%i, %i, %i", N3, N1, N2);
		}
		else if(N2>N1 && N2>N3 && N1>N3){
				printf("%i, %i, %i", N2, N1, N3);	
			}
		}
	
		
	
		
	

