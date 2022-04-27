#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int num1;
    int num2;
    int inp;
    printf("Hello, we gonna do some maths!\n");
    printf("What do you wanna do?\n");
    printf(" 1)increment\n 2)decrement\n 3)multiplication\n 4)power\n");
    scanf("%d",&inp);
    if (inp == 1)
    {
        printf("give me a number: \n");
        scanf("%d", &num1);
        printf("give me another number: \n");
        scanf("%d", &num2);
        printf("The result of that operation is: %d", num1 + num2);
    }
    else if (inp == 2)
    {
        printf("give me a number: \n");
        scanf("%d", &num1);
        printf("give me another number: \n");
        scanf("%d", &num2);
        printf("The result of that operation is: %d", num1 - num2);
    }

    else if (inp == 3)
    {
        printf("give me a number: \n");
        scanf("%d", &num1);
        printf("give me another number: \n");
        scanf("%d", &num2);
        printf("The result of that operation is: %d", num1 * num2);
    }
    /*
    else if (inp == 4)
    {
    
        printf("give me a number: \n");
        scanf("%d", &num1);
        printf("give me another number: \n");
        scanf("%d", &num2);
        printf("The result of %d ^ %d is: %d", num1, num2,  pow(num1, num2));
        }*/
    return 0; 
}
