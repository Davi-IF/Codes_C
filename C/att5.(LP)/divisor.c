#include <stdio.h>

int main() {
    int num, i;
    int prime = 1;  

    printf("type a number ");
    scanf("%d", &num);

    if (num <= 1) {
        prime = 0;  
    }
    
    else if (num == 2) {
        prime = 1;  
    }
   
    else {
       
        for (i = 3; i * i <= num; i += 2) {
            if (num % i == 0) {
                prime = 0;  
                break;  
            }
        }
    }

    if (prime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d isn't a prime number.\n", num);
    }

    return 0;
}
