#include <unistd.h>

void lowest_grade(int studentsGrade[], int studentsNum){
    int i = 1;  
    int lowest = studentsGrade[0];  

    while (i < studentsNum){
        if (studentsGrade[i] < lowest){
            lowest = studentsGrade[i];
        }
        i++;
    }

    write(1, "Lowest grade: ", 15);
    studentorder(lowest);
    write(1, "\n\n", 2);
}

#ifndef LOWEST_GRADE_H
#define LOWEST_GRADE_H
void lowest_grade(int studentsGrade[], int studentsNum);
#endif
