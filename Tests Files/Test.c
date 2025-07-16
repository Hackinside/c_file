#include<stdio.h>
#include<string.h>

int main()
{
const char *name = "George";
int age = 99;
printf("My name is %s\n",name);
printf("My age is %d",age);
int new_age = 50;
int diff = age - new_age;
printf("\nDifference in age is %d", diff);
return 0;
}


