#include<stdio.h>

int a=15,b=4,result;

int main(){
    //clear screen
    system("cls");

    //for left shift
    result = a<<2;
    printf("\nleft 2 shift is %d",result);

    result = a+b;
    printf("\nadd a and b is %d",result);
    result = a-b;
    printf("\nsubstract a and b is %d",result);
    result = a*b;
    printf("\nmultipli a and b is %d",result);
    result = a/b;
    printf("\ndivided a and b is %d",result);

    
}