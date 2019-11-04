/**
Write a program which:
    - asks for the exact number of students
    - allocates in the heap an array to hold their marks
    - fills their marks from the keyboard
    - calculates and displays the class average
**/

#include <stdio.h>
#include <stdlib.h>


#define MARKS_NB 3

typedef struct {
    int id;
    float *marks;
    float avg;
} student;

student* newStudent(const int *id) {

    student *s = (student *) malloc(sizeof(student));
    s->id = *id;
    s->marks = (float *) malloc(MARKS_NB * sizeof(float));

    double avg = 0;    
    printf("Please enter the %d marks of student %d\n", MARKS_NB, s->id);
    for (int i=0; i < MARKS_NB; i++){
        scanf("%f", &s->marks[i]);
        avg += s->marks[i];
    }
    s->avg = avg / MARKS_NB;
//    for (int i=0; i < MARKS_NB; i++){
 //       printf("%f", *s->marks++);
  //  }

    return s; 

}

void printStudent(student *student){
    printf("Student %d has %d marks and an average of %f. The marks are : \n", student->id, MARKS_NB, student->avg);
    for (int i=0;i<MARKS_NB;i++){
        printf("%.2f ", student->marks[i]);
    }
    printf("\n");
}

double classAverage(student **students, int nbStd){
    double avg;

    for (int i=0; i<nbStd;i++){
        avg += students[i]->avg;
    }

    return avg / nbStd;
}

int main(void) {

    int nbStd = 0;

    printf("How much students would you like to add ?\n");
    while (nbStd <= 0)
    {
        scanf("%d", &nbStd);
    }

    student **students = (student **) malloc(nbStd * sizeof(student));
    student **p = students;
    for(int i=0; i < nbStd; i++){
        *p = newStudent(&i);
        printStudent(students[i]);
        p++;
    } 

    printf("The class has an mark average of %lf\n", classAverage(students, nbStd));

    free(students);

    return 0;
}