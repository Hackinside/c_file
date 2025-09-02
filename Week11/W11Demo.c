#include <stdio.h>
int main(){
FILE *file = fopen("G:\\My Drive\\Grupo CS - BR\\Semester 2\\Problem Solving\\c_file\\Week11\\file2.txt", "w"); 
printf("Successfully added a file!\n");
    char name[20];
    printf("Write the name of the file:");
    scanf("%s", name);
    fprintf(file, "%s", name);
    fclose(file);
    return 0;
}