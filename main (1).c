#include <stdio.h>
#include "header.h"

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    // Assign function pointers
    CheckFunction palindromeCheck = isPalindrome;
    ComputeFunction factorialCompute = factorial;
    CheckFunction primeCheck = isPrime;

    // Use function pointers
    if (palindromeCheck(n))
        printf("%d is Palindrome\n", n);
    else
        printf("%d is not Palindrome\n", n);

    printf("Factorial of %d is %d\n", n, factorialCompute(n));

    if (primeCheck(n))
        printf("%d is Prime\n", n);
    else
        printf("%d is not Prime\n", n);

    return 0;
}
