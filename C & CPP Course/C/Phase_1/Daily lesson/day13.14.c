#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//ယူနီယံ က ဒေတာတစ်ခုပဲ သိမ်းနိုင်တဲ့ အတွက် နှစ်ခု ကြေငြာရင် ရှေ့တစ်ခုက ပျက်နိုင်တယ်
union student{
    int id;
    char name[20];
};

int main(){
    int *data =(int*)malloc(5*sizeof(int));

    data[0] = 5;
    data[1] = 10;
    for (int i = 0; i < sizeof(data); i++)
    {
        printf("size of *data is %d\n",*(data+i));
    }
    
    union student s1;
    strcpy(s1.name,"aung");

    printf("\nid is %d\nname is %s",s1.id,s1.name);

    free(data);
    return 0;
}