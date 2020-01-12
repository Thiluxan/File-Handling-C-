#include<stdio.h>
int main(){
    FILE *file1;
    file1 = fopen("detail.txt","r");
    int marks, total = 0;
    while(fscanf(file1,"%*s %d",&marks)!= EOF){
        total = total + marks;
    }
    printf("Total = %d\n",total);
    fclose(file1);
}
