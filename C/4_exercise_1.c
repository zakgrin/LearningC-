#include <stdio.h>
#include <stdlib.h>

int main(){

    // Courses:
    float arabic, english, math, science, religion, sports, history;
    float sum;
    float average;

    printf("Please enter 7 grades: ");
    scanf("%f, %f, %f, %f, %f, %f, %f", 
            &arabic, &english, &math, &science, 
            &religion, &sports, &history);
            
    // printf("Please enter arabic grade: ");
    // scanf("%f", &arabic);
    // printf("Please enter english grade: ");
    // scanf("%f", &english);
    // printf("Please enter math grade: ");
    // scanf("%f", &math);
    // printf("Please enter science grade: ");
    // scanf("%f", &science);
    // printf("Please enter religion grade: ");
    // scanf("%f", &religion);
    // printf("Please enter sports grade: ");
    // scanf("%f", &sports);
    // printf("Please enter history grade: ");
    // scanf("%f", &history);

    sum = arabic + english + math + science + religion + sports + history;
    average = sum / 7;

    printf("Average Grade = %f", average);

}