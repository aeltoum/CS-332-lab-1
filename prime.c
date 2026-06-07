#include <stdio.h>
#include <stdbool.h>

bool isPrime (int number) {
    int i;
    if (number < 2)
        return false;

    for(i = 2; i < number; i++){
        if (number % i == 0)
            return false;
    }
    return true;
}


int main() {
    
    int given_number;
    
    printf("Please enter the number you want to check for prime \n");
    scanf("%d" , &given_number);
    if (isPrime (given_number) == false) {
        printf ("The number is not prime\n");
        return 0;
    }
    printf ("The number is prime\n");
}