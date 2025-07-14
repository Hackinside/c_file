#include<stdio.h>
int main(){
    int timesTable = 1;
    int timer = 1;

    while(timesTable <= 10){
        printf("____________________________________________________________\n");
        printf("Times table for %d\n", timesTable);
        printf("____________________________________________________________\n");
        timer = 1;
        while(timer <=10){
            printf("%d x %d = %d\n", timesTable, timer, timesTable * timer);
            timer++;
        }
        printf("____________________________________________________________\n");
        printf("\n");
        timesTable++;
    }
    printf("End of program\n"); 
    return(0);
}