#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"utility.h"

//student structure but we had been called utility header
// struct student
// {
//     int id;
//     char name[50];
//     int age;
//     float marks;
//     char save[5];
// };

//variable declare
int ch=0;

//user request prompt
void user_request(){
    printf("1. Add Student\n2. View All Student\n3. Search Student\n4. Delete Student\n5. Exit\n press any key to continue...");
}

//user input and choice
int user_choice(){
    int c;
    while((c = getchar()) != '\n' && c != EOF );
    printf("Enter your choice: ");  
    scanf("%d",&ch);
    return ch;
}

//user input data
void input_data(struct student *s){
    //variable declare
    int c;

    printf("enter id: ");
    scanf("%d",&s->id);
    while ((c = getchar()) != '\n' && c != EOF);//clear space and eof
    printf("enter your name: ");
    //fflush(stdin); some compiler error so use getchar();
    //getchar();

    fgets(s->name,sizeof(s->name),stdin);
    s->name[strcspn(s->name, "\n")] = '\0';
    printf("enter age: ");
    scanf("%d",&s->age);
    printf("enter marks: ");
    scanf("%f",&s->marks);
    while ((c = getchar()) != '\n' && c != EOF);//clear space and eof
    printf("\nAre you save file\nYes(or)No: ");
    //fflush(stdin);
    //getchar();
    fgets(s->save,sizeof(s->save),stdin);
    s->save[strcspn(s->save, "\n")] = '\0';
    if(strcmp(s->save,"Yes") == 0){
        FILE *fp = fopen("Student Manament System\\student_data.bin","ab");
        if(fp == NULL){
            // file missing → create it
            fp = fopen("student_data.bin", "wb");
            // printf("File open error !");
            // return;
        }
        fwrite(s,sizeof(struct student),1,fp);//use s ,don't be use &s because s is already pointer
        fclose(fp);

        printf("Student saved succefully ! \n");
    }
}