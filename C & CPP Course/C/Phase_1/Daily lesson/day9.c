#include<stdio.h>
//pointer lesson


int main(){
    //screen clear 
    system("cls");
    int a=4;
    int * ptrA = &a;

    printf("value of a pointer %d\n",*ptrA);

    char *chr = NULL;
    
    //2 times of a
    *ptrA = *ptrA * 2;
    printf("value of a is %d\n",*ptrA);
    
    printf("value of a pointer %d",&a);

    
    printf("2 times of a = %d",*ptrA);
    printf("%c",*chr);
    return 0;
}