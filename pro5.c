#include<stdio.h>
void main(){
    FILE *file2;
    char str[1000];
    file2 = fopen("hi.txt","r+");
    if(file2 == NULL)
        printf("hi.txt File doesn't exist\n");
    else
        printf("hi.txt file exists\n");
    printf("Data on the file\n\n");
    while(fgets(str, 1000, file2) != NULL){
        printf("%s ",str);
    }
    fclose(file2);
}

