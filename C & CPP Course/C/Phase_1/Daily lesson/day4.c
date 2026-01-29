#include<stdio.h>

int a= 10,b=4,result,user_num,user_num2;
char opr;

int main(){
    //screen clear 
    system("cls");
    
    //checking a is even or odd
    if(a%2==0){
        printf("a is even number\n");
    }else{
        printf("a is odd number\n");
    }
    //checking b is even or odd
    if(b%2==0){
        printf("b is even number\n");
    }else{
        printf("b is odd number\n");
    }

    printf("enter operator(+,-,*,/):");
    scanf("%c",&opr);
    printf("enter number one:");
    scanf("%d",&user_num);
    printf("enter number two:");
    scanf("%d",&user_num2);

    switch(opr){
        case '+':
        result = user_num+user_num2;
        printf("result of add is %d",result);
        break;
        case '-':
        result = user_num-user_num2;
        printf("result of substuct is %d",result);
        break;
        case '*':
        result = user_num*user_num2;
        printf("result of multiply is %d",result);
        break;
        case '/':
        result = user_num/user_num2;
        printf("result of divide is %d",result);
        break;
        default:
        printf("operator issue");
        break;
    }
    return 0;
}