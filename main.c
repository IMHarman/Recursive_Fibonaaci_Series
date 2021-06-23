\\Write a program to print first n fibonaaci series.

#include <stdio.h>
#include <stdlib.h>

void fibo(int, int, int);

int main()
{
    int old = 1, current = 1, n;
    printf("Enter the number of Fibonacci Series number you want to print: ");
    scanf("%d", &n);
    printf("0\t%d\t%d\t", old, current);
    fibo(old, current, n-2);
    return 0;
}

void fibo(int old, int current, int terms)
{
    int newterm;
    if(terms >= 1)
    {
        newterm = old + current;
        printf("%d\t", newterm);
        terms--;
        fibo(current, newterm, terms);
    }
}
