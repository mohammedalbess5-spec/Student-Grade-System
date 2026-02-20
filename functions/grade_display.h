#include <unistd.h>

void grade_display(int studentsGrade[], int studentsNum){
 write(1, "Grades entered:\n", 17);

    int i = 0;
    while (i < studentsNum){
        studentorder(studentsGrade[i]);
        write(1, " ", 1);
        i++;
    }
    
    write(1, "\n\n", 2);
}


#ifndef GRADE_DISPLAY_H
#define GRADE_DISPLAY_H
void grade_display(int studentsGrade[], int studentsNum);
#endif