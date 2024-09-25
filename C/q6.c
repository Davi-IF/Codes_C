#include<stdio.h>

int main (){
	
	float A[6];
	float B[6];
	int i;
	
	for(i=0; i<6; i++){
	
		printf("digite valores de A:");
		scanf("%f", &A[i]);
	
	}
	for(i=0; i<6; i++)	{
	 
			if(i % 2 == 0){
				
				if(i+1 <6){	
					B[i] = A[i+1];	
					
				} else {
					B[i]= 0;	
				}	
				
			    } else {
					B[i] = A[i-1];
				}
	}
	for(i=0; i<6; i++){
		
		printf("valores de A: %f\n", A[i]);
	}
		
	for(i=0; i<6; i++){
		printf("valores de B: %f\n", B[i]);
		
	}
}
		

	 
	
	

