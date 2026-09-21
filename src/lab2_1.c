#include <stdio.h>

/*
    Task:
    Write a function `int sum_to_n(int n)` that computes
    the sum of all integers from 1 up to n using a for loop.

    In main():
      - Ask user for a positive integer n
      - If n < 1, print an error
      - Otherwise, call sum_to_n and print the result
*/

int sum_to_n(int n) {
 

  int sum = 0;
  for (int i = 0; i < n; i++) {
    printf(" Please input a number that will be summed");
sum = sum + (i + 1);
  }
  // printf(sum);
  // return 0;
  return sum;
}

int main(void) {
  int n;

  printf("Enter a positive integer n: ");
  scanf("%d", &n);
  while (n < 1)

  {
    printf("N is too low. Please input a 'n' ");
    scanf("%d", &n);
  }

  // printf the value returned from the sum_to_n function
  int result = sum_to_n(n);
    printf("The sum of integers from 1 to %d is: %d\n", n, result);
}

/*Use a for loop to compute the sum of integers 1 through n.*/

// n main:

// Ask user for n

// If n < 1, print error message

// Otherwise call sum_to_n and print the result