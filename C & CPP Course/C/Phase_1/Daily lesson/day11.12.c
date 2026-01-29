#include<stdio.h>
#include<string.h>
//for struct lesson

struct worker{
    int id;
    char name[20];
    int section;
};

void worker_record(struct worker mawlaik);
void inputData(struct worker *mawlaik);

int main(){
    //screen clear
    //system("cls");

    //employee
    struct employee{
        int id;
        char product[15];
        double selary;
    };

    struct student{
        int id;
        char name[20];
        int age;
    };

    struct student list1 ;// ={1,"aung",14};
    list1.id=1;
    strncpy(list1.name,"aung",20);
    list1.age=14;

    printf("\n id is %d\nname is %s\nage is %d",list1.id,list1.name,list1.age);

    //employee
    struct employee drone = { 1,"propellor",20000 };
    struct employee prome[2] = {{1,"carbine",100},{2,"rifle",200}};

    printf("\nprome position 1\nid is %d\nproduct is %s\nselary is %.2lf\nprome position 2\nid is %d\nproduct is %s\nselary is %.2lf",prome[0].id,prome[0].product,prome[0].selary,prome[1].id,prome[1].product,prome[1].selary);


    printf("\nid is %d \n product is %s\nselary is %lf\n",drone.id,drone.product,drone.selary);

    //variable declaration
    struct worker mawlaik;
    //struct function
    inputData(&mawlaik);
    worker_record(mawlaik);

    return 0;

}


void worker_record(struct worker mawlaik){
    printf("\nworker id = %d",mawlaik.id);
    printf("\nworker name = %s",mawlaik.name);
    printf("\nworker section = %d",mawlaik.section);
}

void inputData(struct worker *mawlaik){
    printf("enter worker id ");
    scanf("%d",&mawlaik->id);
    printf("enter worker name ");
    fflush(stdin);// whatever this statement request a string
    fgets(mawlaik->name,sizeof(mawlaik->name),stdin);
    mawlaik->name[strcspn(mawlaik->name,"\n")] = 0;
    printf("enter worker section ");
    scanf("%d",&mawlaik->section);

}
