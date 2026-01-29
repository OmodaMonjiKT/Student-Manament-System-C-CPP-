#include<stdio.h>

//declare function
void printPointer(int *,int);

//declare variable
int sum=0;

int main(){
    //screen clear
    system("cls");

    int a[3] = {2,4,8};
    //same result
    printf("normal out %d and address out %d",a,&a[0]);
    int *arr = &a;
    printf("\npointer value is %d",sizeof(*arr));
    printf("\nnormal value is %d",sizeof(&a));
    printf("\npointer value is %d",*(arr+1));

    for(int i = 0; i<3 ; i++){
        printf("\n value of loop %d\n",*arr);
        *arr++;
    }

    //call function
    printPointer(a,3);

    printf("sum of array is %d",addArray(a,3));

    return 0;
}

//pointer parameter
void printPointer(int *arr,int size){
    printf("\nindex 0 is %d",arr[0]);
    printf("\nindex 1 is %d",arr[1]);
    printf("\nindex 2 is %d\n",arr[2]);
    for(int i=0; i<size; i++){

        printf("%d\t",*(arr+i));
    }
}

int addArray(int *arr,int size){
    for(int i=0; i<size; i++){
        sum = *(arr+i)+sum;
    }
    return sum;
}