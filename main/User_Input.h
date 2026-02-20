#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "studentorder.h"
#include "average_grade.h"
#include "highest_grade.h"
#include "lowest_grade.h"
#include "grade_display.h"
#include "print.h"

void User_Input(){
    int studentsNum;
     do {
        print("Enter Students Number: ");
        scanf("%d", &studentsNum);

        if (studentsNum <= 0){
            print("Invalid number! Please enter a positive number.\n");
        }

    } 
    while (studentsNum <= 0);  

    int studentsGrade[studentsNum];
    int i = 0;
    while (i < studentsNum){
        int grade; 

        do {
            print("Enter grade for student number ");
            studentorder(i + 1);
            print(" : ");
            scanf("%d", &grade);

            if (grade < 0) {
                print("Invalid grade! Please enter a non-negative grade.\n");
            }

        } while (grade < 0);

        studentsGrade[i] = grade; 
        i++;
    }

    print("\n");
    average_grade(studentsGrade, studentsNum);
    highest_grade(studentsGrade, studentsNum);
    lowest_grade(studentsGrade, studentsNum);
    grade_display(studentsGrade,studentsNum);
    
}

#ifndef USER_INPUT_H
#define USER_INPUT_H
void User_Input();
#endif


