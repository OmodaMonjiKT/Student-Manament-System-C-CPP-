#ifndef STUDENT_H
#define STUDENT_H

struct student
{
    int id;
    char name[50];
    int age;
    float marks;
    char save[5];
};

void err(const char *msg); // error function prototype
void print_student(struct student s); // optional

#endif //  STUDENT_H