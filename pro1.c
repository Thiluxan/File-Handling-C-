#include<stdio.h>
int main(){
    char text[1000], txt[1000];
    FILE *file1, *file2;
    file1 = fopen("Hello.txt", "r");
    while(fscanf(file1,"%s",text) != EOF){
        printf("%s \n",text);
    }
    fclose(file1);
    printf("\n\n");
    file2 = fopen("Hello.txt","r");
    while(!feof(file2)){
        fgets(txt, 1000, file2);
        puts(txt);
    }
    fclose(file2);
}
