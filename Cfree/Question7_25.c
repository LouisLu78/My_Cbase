# include <stdio.h>
# define STUDENTS 3
# define EXAMS 4

void function0(const int grades[][EXAMS], int pupils, int tests);  /* printArray */
void function1(const int grades[][EXAMS], int pupils, int tests);  /* minimum */
void function2(const int grades[][EXAMS], int pupils, int tests); /* maximum */
void function3(const int grades[][EXAMS], int pupils, int tests); /* average */


main()
{
 int students;
 const int studentGrades[STUDENTS][EXAMS]= {{77,68,86,73},
                                            {96,87,89,78},
                                            {70,90,86,81}};
 void (*f[4])(const int grades[][EXAMS], int pupils, int tests)={function0, function1, function2, function3};
 int choice;
 printf("Please enter a number between 0 and 4: ");
 scanf("%d", &choice);
 while (choice >= 0 && choice < 5){
    if (choice == 4){
        printf("You have chosen to end the program.");
        break;
    }
    else{
        (*f[choice])(studentGrades, STUDENTS, EXAMS);
        printf("Please enter a number between 0 and 4: ");
 		scanf("%d", &choice);
    }
 }
 return 0;
}

void function0(const int grades[][EXAMS], int pupils, int tests)
{
    int i, j;
    
    for (i = 0; i < pupils; i++){
        printf("\nstudentsGrades[%d] ", i);
        for (j = 0; j < tests; j++){
            printf("%-5d", grades[i][j]);
        }
    }
}

void function1(const int grades[][EXAMS], int pupils, int tests)
{
    int i, j;
    int lowGrade = 100;
    for (i = 0; i < pupils; i++){
        for (j = 0; j < tests; j++){
           if (grades[i][j] < lowGrade){
               lowGrade = grades[i][j];
           }
        }
    }
    printf("The minimum score is %d.\n", lowGrade);
}



void function2(const int grades[][EXAMS], int pupils, int tests)
{
    int i, j;
    int highGrade = 0;
    for (i = 0; i < pupils; i++){
        for (j = 0; j < tests; j++){
           if (grades[i][j] > highGrade){
               highGrade = grades[i][j];
           }
        }
    }
    printf("The maximum score is %d.\n", highGrade);
}

void function3(const int grades[][EXAMS], int pupils, int tests)
{
    int i, j;
    float sum = 0.0;
    int average;
    
    for (i = 0; i < pupils; i++){
        for (j = 0; j < tests; j++){
           sum += grades[i][j];
        }        
        average = sum / tests;        
        printf("The average score of student[%d] is %.2f.\n", i, average);
        sum = 0.0;
    }
}


