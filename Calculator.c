
#include <stdio.h>

int main() {
    char op;    
    float num1, num2, result; 
    
    printf("Enter first number x : ");
    scanf("%f", &num1);
       
    printf("Enter operator : ");
    scanf(" %c", &op);
    
    printf("Enter second number y : ");
    scanf("%f",&num2);
    
    switch(op) {
        
        case '+':
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break; 
            
        case '-':
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
            
        case '*':
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
            
        case '/':
            
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                
                printf("Error: Division by zero is undefined.\n");
            }
            break; 
            
       
        default:
            printf("Error: Invalid operator \n", op);
            break;
    }
    
    return 0; 
}
