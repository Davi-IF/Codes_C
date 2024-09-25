#include<stdio.h>
#include<math.h>


int main (){
	
	int A = 5000000, B =  7000000;
	int t = 0;
		
	while (A < B){
			
			A = (A * 0.3) + A;
			B = (B * 0.2) + B;
			t ++;
			
	}
	
	printf("o tempo necessario e de: %i\n", t);
	printf("valor de A apos ultrapassar: %i\n", A);
	
}
