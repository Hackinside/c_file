#include<stdio.h>
int main() 
{
    int num;
    printf("___________________________________________________\n");
    printf("Enter an number to check if it is a multiple of 3: \n ");
    printf("___________________________________________________\n");
    scanf("%d", &num);
    if(num % 3 == 0)
        printf("%d is a multiple of 3.\n", num);
    else
        printf("%d is not a multiple of 3.\n", num);
    return 0;
}
