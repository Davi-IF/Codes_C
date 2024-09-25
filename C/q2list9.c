#include<stdio.h>
#include<math.h>

int Potencia(int x, int y){
	
	int  i, result_pot=1;
	
	for (i=0; i<y; i++){
	
		 result_pot = result_pot * x;
	}
	return result_pot;
	
}

int main (){
	int num, exp, result;
	
	printf("digite o numero base:");
	scanf("%i", &num);
	printf("digite o expoente: ");
	scanf("%i", &exp);
	
	result = Potencia(num,exp);
	
	printf("o resultado e: %i", result);
	
	return 0;
}
