#include<stdio.h>
#include<stdlib.h>

int main(){

    // 1. If-Else Operation: Password
    const int password = 1234;
    int input;

    printf("Please enter the password: ");
    scanf("%d", &input);

    if(input == password){
        printf("Password is correct!\n"); 
    }
    // else only used after "if"
    else{
        printf("Password is wrong!\n");
    }

    // 2. If-Else If-Else Operations: Calculator
    int choice;

    printf("Please select the operations\n");
    printf("1. addition\n");
    printf("2. substraction\n");
    printf("3. multiplication\n");
    printf("4. division\n");

    printf("Choice: "); 
    scanf("%d", &choice);

    if(choice >= 1 && choice <= 4){
        int num_a, num_b; // better to define inside if when it is not needed outside
        printf("1st number: ");
        scanf("%d", &num_a);

        printf("2nd number: ");
        scanf("%d", &num_b);

        if(choice == 1) // curly brackets are not needed when if is oneline
            printf("%d + %d = %d \n", num_a, num_b, num_a + num_b);
        
        if(choice == 2)
            printf("%d - %d = %d \n", num_a, num_b, num_a - num_b);

        if(choice == 3)
            printf("%d * %d = %d \n", num_a, num_b, num_a * num_b);
        
        if(choice == 4)
            printf("%d / %d = %f \n", num_a, num_b, (float)num_a / (float)num_b); // float division has to have float numbers! 
    }
    else{
        printf("wrong option was selected!\n");
    }

    return 0;
}