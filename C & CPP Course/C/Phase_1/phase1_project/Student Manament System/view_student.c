#include<stdio.h>
#include"utility.h"



//student structure
// struct student
// {
//     int id;
//     char name[50];
//     int age;
//     float marks;
//     char save[5];
// };


//view_data function
void view_data(){

    FILE *fp = fopen("student_data.bin","rb");
    struct student s;

    if (fp == NULL) {
        printf("No data file found.\n");
        return;
    }

    //fread(&s,sizeof(struct student),1,fp); my code


    /********************************************************************* */
    //THIS is copy from chatgpt

    printf("\nID\tName\t\tAge\tMarks\n");
    printf("-----------------------------------\n");

    while (fread(&s, sizeof(struct student), 1, fp) == 1) {
        printf("%d\t%-15s\t%d\t%.2f\n",
               s.id, s.name, s.age, s.marks);
    }

    /************************************************************************ */

    fclose(fp);
}
