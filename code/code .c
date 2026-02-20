#include <unistd.h>
#include <stdio.h>
#include <string.h>

void print(char msg[]){

    write (1, msg, strlen(msg));

}


void    studentorder(int n){
    char    num[10];
    int     i = 0;

    if (n == 0) {  
        write(1, "0", 1);
        return;
    }

    while (n > 0){
        num[i] = (n % 10) + '0';
        n = n / 10;
        i++;
    }

    while (i > 0){
        i--;
        write(1, &num[i], 1);
    }
}


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
            write(1, " : ", 3);
            scanf("%d", &grade);

            if (grade < 0) {
                print("Invalid grade! Please enter a non-negative grade.\n");
            }

        } while (grade < 0);

        studentsGrade[i] = grade;
        i++;
     }
    int grade_sum = 0;
    while(i < studentsNum){

        grade_sum += studentsGrade[i];
        i++;

        
    }
    int grade_average = grade_sum / studentsNum;
        print("\nAverage: ");
        studentorder(grade_average);
        write(1, "\n\n", 2);

    i = 1;  
    int highest = studentsGrade[0];  

    while (i < studentsNum){
        if (studentsGrade[i] > highest){
            highest = studentsGrade[i];
        }
        i++;
    }

    print("Highest grade: ");
    studentorder(highest);
    write(1, "\n\n", 2);

    i = 1;  
    int lowest = studentsGrade[0];  

    while (i < studentsNum){
        if (studentsGrade[i] < lowest){
            lowest = studentsGrade[i];
        }
        i++;
    }

    print("Lowest grade: ");
    studentorder(lowest);
    write(1, "\n\n", 2);

    print("Grades entered:\n");

    i = 0;
    while (i < studentsNum){
        studentorder(studentsGrade[i]);
        write(1, " ", 1);
        i++;
    }

    write(1, "\n\n", 2);

}
