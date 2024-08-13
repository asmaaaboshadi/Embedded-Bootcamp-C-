
#include <stdio.h>

int main()
{
    char op;
    float num1, num2, result=0.0f;



    printf("Enter [number 1] [+ - * /] [number 2]\n");


    scanf("%f %c %f", &num1, &op, &num2);


    switch(op)
    {
        case '+':
            result = num1 + num2;
            printf("%f %c %f = %f", num1, op, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%f %c %f = %f", num1, op, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%f %c %f = %f", num1, op, num2, result);
            break;

        case '/':
            switch (num2!=0){
                case (1) :
                    result = num1 / num2;
                    printf("%f %c %f = %f", num1, op, num2, result);
                    break;

                case (0) :
                     printf("devision by zero is not valid ") ;
                     break;

            }

            break;

        default:
            printf("Invalid operator");
    }




    return 0;
}