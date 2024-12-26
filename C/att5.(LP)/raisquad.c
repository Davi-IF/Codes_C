    #include <stdio.h>
#include <math.h> 

int main() {
    double n, b, p;


    printf("Digite um número para calcular a raiz quadrada: ");
    scanf("%lf", &n);

    b = 2.0;


    p = (b + (n / b)) / 2.0;

 
    while (fabs((b * b) - n) >= 0.0001) {
        b = p;  
        p = (b + (n / b)) / 2.0;  

    // Exibir o resultado
    printf("A raiz quadrada aproximada de %.4lf é %.4lf\n", n, b);

    return 0;
}
