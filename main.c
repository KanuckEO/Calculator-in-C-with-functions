#include <stdio.h>
char operator;
double first, second;

int main(void) {
    printf("Enter an operator (+, -, *, /,): ");
    scanf("%c", &operator);
    printf("Enter first factor: ");
    scanf("%lf", &first);
    printf("Enter second factor: ");
    scanf("%lf", &second);

if (operator == '+')
    addition();

if (operator == '-')
    substraction();

if (operator == '*')
    multiplication();

if (operator == '/')
    division();
}



int addition(void){
   printf("%.2lf + %.2lf = %.2lf", first, second, first + second);
}

int substraction(void){
  printf("%.2lf - %.2lf = %.2lf", first, second, first - second);   
}

int multiplication(void){
  printf("%.2lf * %.2lf = %.2lf", first, second, first * second);   
}

int division(void){
  printf("%.2lf / %.2lf = %.2lf", first, second, first / second);  
}