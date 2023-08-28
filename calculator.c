#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#pragma warning(disable:4996)
#define A_PLUS 4.00
#define A 3.75
#define B_PLUS 3.50
#define B 3.00
#define B_MIN 2.75
#define C_PLUS 2.50
#define C 2.00
#define F 2.00


bool isValidID(const char* STUDENT_ID) {
    if (strlen(STUDENT_ID) != 9) {
        return false;
    }

    for (int i = 0; i < 4; i++) {
        if (!isalpha(STUDENT_ID[i])) {
            return false;
        }
    }
    return true;
}

void main() {
    const char STUDENT_ID[10], STAFFMODE[4],COURSECODE[9];
    char studentName[41], grade;
    char staffId[4] = "yap";
    int selection, yearEnrolled, sem, creditHours, tCreditHours;
    double gpa, cgpa, gradePoint, qualityPoint, tQualityPoint;

    printf("-----------------------------------\n");
    printf("            KOLEJ PASAR            \n");
    printf("-----------------------------------\n");
    printf("1-Kolej Pasar staff administrator mode\n");
    printf("2-Kolej Pasar student mode\n");

    printf"Select your mode (1 OR 2) > ");
    scanf("%d", &selection);


    if (selection == 1) {
        printf("\nYou have selected staff administrator mode\n\n");

        printf("Please enter your staff ID > ");
        scanf("%s", STAFFMODE);

        if (strcmp(STAFFMODE, staffId) == 0) {
            printf("\n------Login Successful------\n\n");
            printf("Generate the students semester GPA score\n");
            printf("Enter student name > ");
            rewind(stdin);
            gets(studentName);
            printf("Enter student ID > ");
            rewind(stdin);
            gets(STUDENT_ID);

            if (isValidID(STUDENT_ID)) {

                printf("Year Enrolled > ");
                scanf("%d", &yearEnrolled);
                printf("Current semester > ");
                scanf("%d", &sem);
                printf("\nEnter student course detail: \n");

                printf("Course code > ");
                scanf("%s", COURSECODE);
                printf("Credit Hours > ");
                rewind(stdin);
                scanf("%d", &creditHours);
                printf("Grade Obtained > ");
                rewind(stdin);
                scanf("%c", &grade);
                printf("\n");*/

                for (sem = 0; sem <= 3; sem++) {
                    printf("Course code > ");
                    scanf("%s", COURSECODE);
                    printf("Credit Hours > ");
                    rewind(stdin);
                    scanf("%d", &creditHours);
                    printf("Grade Obtained > ");
                    rewind(stdin);
                    scanf("%c", &grade);
                    printf("\n");
                }

                /*qualityPoint = gradePoint * creditHours;
                tCreditHours += creditHours;
                tQualityPoint += qualityPoint;
                
                gpa = tQualityPoint / tCreditHours;*/

                
            }
            else {
                printf("Student didn't found\n");
            }

        }
        else {
            printf("Login Failed\n");
        }

    }
    else if (selection == 2) {
        printf("\nYou have selected student mode\n");
        

    }
    else {
        printf("error");
    }

    system("pause");
}
