#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"add_student.c"
#include"view_student.c"
#include"utility.h"

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


// void user_request();
// int user_choice();
// void input_data(struct student *s);
// void view_data();

//main loop function
int main(){
    //inner variable place
    struct student s;
    /*************************
     other codes
    **************************/
   //user request call
       while (1)
    {
    user_request();

    //user input call

    //user choice add/delete/search
    rechoice:
    *choice = user_choice();


    
    switch (*choice)
    {
        case 1:
            
           //user add data
            input_data(&s);
        break;
        
        case 2:
            
           //user view data
            view_data(&s);
        break;

        case 3:
            
           //user search data
            input_data(&s);
        break;

        case 4:
            
           //user delete data
            input_data(&s);
        break;

        case 5:
            exit(1);
        break;

        default:
            printf("type error try again\n");
            goto rechoice;
        break;
    }
    
    }

    //return section
    _getch();
    return 0;
}

