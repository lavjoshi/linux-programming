#include<stdio.h>
#include<stdlib.h>

int main(){

    int num;
    FILE *fptr;
    fptr = fopen("a.txt","w");

    if(fptr == NULL){
        printf("error");
        exit(1);
    }

    printf("enter num");
    scanf("%d",&num);

    fprintf(fptr,"%d",num);
    fclose(fptr);

    FILE *fptr_r;
    fptr_r = fopen("a.txt","r");
    fscanf(fptr_r,"%d",&num);
    printf("value =%d ",num);
    return 0;
}