
#include <stdio.h>

int main()
{
    int num, n, newNum;

    printf("Enter any number: ");
    scanf("%d", &num);

    
    printf("Enter nth bit to set : ");
    scanf("%d", &n);

   
    newNum = (1 << n) | num;

   
    printf("Number before setting %d bit: %d \n", n, num);
    printf("Number after setting %d bit: %d \n", n, newNum);

    return 0;
}