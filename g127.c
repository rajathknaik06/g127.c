/*Renu is working on a program to determine if the product of two integers is a perfect square or not. She needs your help to complete the program using pointers.



Note: A perfect square is a number that can be expressed as the product of an integer with itself.

Input format :
The input consists of two space-separated integers N and M.

Output format :
The output displays one of the following:

If the product of the two integers is a perfect square, print "X is a perfect square", where X is the product of N and M.
Otherwise, print "X is not a perfect square", where X is the product of N and M.*/

#include <stdio.h>

int main() {
    int num1, num2, product;
    scanf("%d %d", &num1, &num2);

    int *ptr_product = &product;

    *ptr_product = num1 * num2;

    int isPerfectSquare = 0;
    for (int i = 1; i * i <= *ptr_product; ++i) {
        if (*ptr_product == i * i) {
            isPerfectSquare = 1;
            break;
        }
    }

    if (isPerfectSquare) {
        printf("%d is a perfect square", *ptr_product);
    } else {
        printf("%d is not a perfect square", *ptr_product);
    }

    return 0;
}
