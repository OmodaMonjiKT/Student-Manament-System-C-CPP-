#include<stdio.h>
#include<conio.h>
#include"add_student.h"

//struct for student declare
// struct student
// {
//     int id;
//     char name[50];
//     int age;
//     float marks;
// };

//variable declare global
int ch;
int *choice = &ch;
//function declare top1


void user_request();
int user_choice();
void input_data(struct student *s);

//main loop function
int main(){
    //inner variable place
    struct student s;
    /*************************
     other codes
    **************************/
   //user request call
    user_request();

    //user input call
    *choice = user_choice();
    
    input_data(&s);
    
    //return section
    _getch();
    return 0;
}

