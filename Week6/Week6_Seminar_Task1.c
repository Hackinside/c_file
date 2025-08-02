#include<stdio.h>
int main()
{
    int n, i;
    int sum = 0; 
    i = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    while(i <= n) { 
        sum += i;
        i++;
    }
    printf("Sum = %d\n", sum);
    return 0;
}
