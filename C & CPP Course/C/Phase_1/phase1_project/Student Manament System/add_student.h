#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//student structure
struct student
{
    int id;
    char name[50];
    int age;
    float marks;
    char save[5];
};

//variable declare
int ch=0;

//user request prompt
void user_request(){
    printf("1. Add Student\n2. View All Student\n3. Search Student\n4. Delete Student\n5. Exit\n");
}

//user input and choice
int user_choice(){
    printf("Enter your choice: ");
    scanf("%d",&ch);
    return ch;
}

//user input data
void input_data(struct student *s){
    printf("enter id: ");
    scanf("%d",&s->id);
    printf("enter your name: ");
    fflush(stdin);
    fgets(s->name,sizeof(s->name),stdin);
    printf("enter age: ");
    scanf("%d",&s->age);
    printf("enter marks: ");
    scanf("%f",&s->marks);
    printf("\nAre you save file\nYes(or)No: ");
    fflush(stdin);
    fgets(s->save,sizeof(s->save),stdin);
    printf("s->save is %s",s->save);
    if(strcmp(s->save,"Yes") == 1){
        FILE *fp = fopen("student_data.bin","wb+");
        fwrite(&s,sizeof(s),1,fp);
        fclose(fp);
    }
}