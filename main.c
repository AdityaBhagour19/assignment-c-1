#include <stdio.h>
#include "header.h"

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if (isPalindrome(n))
        printf("%d is Palindrome\n", n);
    else
        printf("%d is not Palindrome\n", n);

    printf("Factorial of %d is %d\n", n, factorial(n));

    if (isPrime(n))
        printf("%d is Prime\n", n);
    else
        printf("%d is not Prime\n", n);

    return 0;
}
