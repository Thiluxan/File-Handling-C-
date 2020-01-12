#include<stdio.h>
int main(){
    int marks,total = 0,i = 1;;
    FILE *file1,*file2;
    file1 = fopen("marks.txt","r");
    file2 = fopen("report.txt","a+");
    if(file2 == NULL)
        printf("Report file doesn't exist a new one is created\n");
    while(fscanf(file1,"%d",&marks)!= EOF){
        printf("Marks %d = %d\n",i,marks);
        fprintf(file2,"Marks %d = %d\n",i,marks);
        i++;
        total =  total + marks;
    }
    printf("Total = %d\n",total);
    fprintf(file2,"Total = %d\n\n\n",total);
    fclose(file1);
}
