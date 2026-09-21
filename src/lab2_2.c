#include <stdio.h>

/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

long long factorial(int n) {
    long long result = 1;
    for (int i=1; i<= n; i++){
        result=result* i;
    }
    return result;
 }
    // TODO: compute factorial iteratively
     // placeholder

int main(void) {
    int n;

    printf("Enter a non-negative integer n: ");
    scanf("%d", &n);

    while(n<0){

        printf("The number has to be greater than zero add one more number ");
        scanf("%d", &n);
        
    }

    
    

    
    // TODO: validate input, call function, print result
    printf("Your factorial number is: %lld\n " , factorial(n));

    return 0;
}
