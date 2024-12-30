#include<stdio.h>

int main(void){
	
		int qtd, c;
		float n, m, s;
	
			printf("quantidade de alunos:");
			scanf("%i", &qtd);
			
			for(c=1; c<=qtd; c++){
				
				printf("digite a nota do aluno:");
				scanf("%f", &n);
				s = s + n;
				
			}
			
			m = s/qtd;
			printf("a media e: %f", m);
	
	
	return 0;
}


