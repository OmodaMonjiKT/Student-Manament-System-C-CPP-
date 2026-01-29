#include <stdio.h>

int myArray[] = {3, 50, 142, 8, 20};
int check1, check2, biggest;

void check_largest();
void outArray();

int main()
{
    // screen clear
    system("cls");

    int a[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter number : ");
        scanf("%d", &a[i]);
        // printf("value of i is = %d",i);
    }
    printf("a[0]=%d\n a[1]=%d\n a[2]=%d\n a[3]=%d\n a[4]=%d\n ", a[0], a[1], a[2], a[3], a[4]);
    //keep loop with sizeof
    int a[3];
    printf("size of a is %d\n",sizeof(a));
    while(sizeof(a) > i){
        printf("hello programmer\n");
        i++;
    }

    //call functioin
    check_largest();
    outArray();
    
}

// check largest number
void check_largest()
    {
        for (int j = 0; j < 5; j++)
        {
            check1 = myArray[j];
            check2 = myArray[j + 1];

            if (j == 0)
            {
                if (check1 < check2)
                {
                    biggest = check2;
                }
                else
                {
                    biggest = check1;
                }
            }
            if (j > 0)
            {
                if (check1 < check2)
                {
                    if (check2 < biggest)
                    {
                        biggest = biggest;
                    }
                    else
                    {
                        biggest = check2;
                    }
                }else{
                    if (check1 < biggest)
                    {
                        biggest = biggest;
                    }
                    else
                    {
                        biggest = check1;
                    }
                }
            }
        }
        printf("largest number is %d\n\n\n\n\n", biggest);
}
// 2d array mitrix output

void outArray()
{
        int z[2][2] = {{1,3},{2,4}};
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                printf("%d\t",z[i][j]);
            }
            printf("\n");
        }
        
}