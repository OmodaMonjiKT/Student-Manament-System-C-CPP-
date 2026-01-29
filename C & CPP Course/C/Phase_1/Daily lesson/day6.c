#include<stdio.h>

int multiply(int,int);
int addTen(int);

int z = 5;

int main(){
    //screen clear
    system("cls");

    //call function
    int multi = multiply(2,5);
    printf("multiply result is %d\n",multi);
    int sum = addTen(z);
    printf("multiply result is %d",sum);
}

//multiply function
int multiply(int a,int b){
    return a*b;
}

int addTen(int x){
    return x+10;
}