#include<stdio.h>
#include<stdlib.h>

int main(){

    double apple = 40;
    double orange = 20;

    // Basic Operations:
    int sum = apple + orange;
    int dif = apple - orange;
    int mul = apple * orange;
    int i_div = apple / orange;
    double d_div = apple / orange;

    printf("sum = %d \n", sum);
    printf("dif = %d \n", dif);
    printf("mul = %d \n", mul);
    printf("integer div = %d \n", i_div);
    printf("double div = %.2f \n", d_div);

    // Special Form: 
    int j = 1; 
    j = j + 1;
    j++; // to add 1
    ++j; // to add 1
    j += 1; // to add any number
    j -= 1; // to substract any number
    j *= 2; // to multiply by any number
    j /= 2; // to devide by any number
    printf("j = %d \n", j);

    // Understanding Operations:
    int c = 1;
    printf("c=%d \n", c);
    printf("c++=%d \n", c++); // addition after line
    printf("c=%d \n", c); // here we see value of 2
    printf("++c=%d \n", ++c); // addition during the line, here we see value of 3

    return 0;
}