#include <unistd.h>

void average_grade(int studentsGrade[], int studentsNum){
    int i = 0;
    int grade_sum = 0;

    while (i < studentsNum){
        grade_sum += studentsGrade[i];
        i++;
    }

    int grade_average = grade_sum / studentsNum;

    write(1, "Average: ", 9);
    studentorder(grade_average);
    write(1, "\n\n", 2);
}

#ifndef AVERAGE_GRADE_H
#define AVERAGE_GRADE_H
void average_grade(int studentsGrade[], int studentsNum);
#endif


