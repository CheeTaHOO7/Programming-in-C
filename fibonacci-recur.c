#include <stdio.h>
int fib(int);
int main() {
    int n;
    printf("Enter the n to print fibonacci series: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        printf("%d ", fib(i));
    return 0;
}
int fib(int n){
    if (n == 0)
       return 0;
    if (n == 1)
       return 1;
    return (fib(n-1) + fib(n-2));
}
