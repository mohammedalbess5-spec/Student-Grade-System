#include <unistd.h>


void highest_grade(int studentsGrade[], int studentsNum){
    int i = 1;  
    int highest = studentsGrade[0];  

    while (i < studentsNum){
        if (studentsGrade[i] > highest){
            highest = studentsGrade[i];
        }
        i++;
    }

    write(1, "Highest grade: ", 15);
    studentorder(highest);
    write(1, "\n\n", 2);
}

#ifndef HIGHEST_GRADE_H
#define HIGHEST_GRADE_H
void highest_grade(int studentsGrade[], int studentsNum);
#endif
