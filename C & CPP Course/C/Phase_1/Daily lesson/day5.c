#include<stdio.h>

int i=0;
int main(){
    //SCREEN clear
    system("cls");
    //for loop
    for(int i=1;i<10;i++){
        for (int j = 0; j < i; j++)
        {
            
            printf("*");
        }
        printf("\n");
    }

    //while loop
    while(10>i){
        printf("program is running %d\n",i);
        i++;
        if(i==4){
                continue;
            }
        if(i==7){
            break;
        }
        
    }

    //do while
    do{
        printf("program is running this section\n");
        i++;
    }while(i<10);

}