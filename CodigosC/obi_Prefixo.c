	#include<stdio.h>
	#include<string.h>
	
	void prefixo(char x[], char y[]) {
		
		int i, qtd=0;
		
		for(i=0; x[i]!='0' && y[i]!='0'; i++){
			if(x[i] == y[i]){
			qtd ++;
			}
			else{
				break;
			}
		}
		printf("%i", qtd);
	}
	
	int main (){
	
		int N1, M1;
		
		printf("quantidade [primeira palavra]:");
		scanf("%i", &N1);
		
		char P1[N1+1];
		
		printf("digite caracteres de p1:");
		scanf("%s", P1);
		
		printf("quantidade [segunda palavra]:");
		scanf("%i", &M1);
		
		char S1[M1+1];
		
		printf("digite caracteres de s1:");
		scanf("%s", S1);
	
		prefixo(P1, S1);
	
	}
