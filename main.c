#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int num1;
    int num2;
    int inp;
    char name[20];
    printf("Hello, we gonna do some maths!\n");
    printf("Whats your name?\n");
    fgets(name, 20,stdin);
    if (name > 20)
    {
    printf("Please enter a valid name...");   
       }
    printf("What do you wanna do?\n");
    printf(" 1)increment\n 2)decrement\n 3)multiplication\n 4)power\n");
    scanf("%d",&inp);
    if (inp == 1)
    {
        printf("give me a number: \n");
        scanf("%d", &num1);
        printf("give me another number: \n");
        scanf("%d", &num2);
        printf("The result of that operation is: %d, mr. %s", num1 + num2, name);
    }
    else if (inp == 2)
    {
        printf("give me a number: \n");
        scanf("%d", &num1);
        printf("give me another number: \n");
        scanf("%d", &num2);
        printf("The result of that operation is: %d, mr. %s", num1 - num2, name);
    }

    else if (inp == 3)
    {
        printf("give me a number: \n");
        scanf("%d", &num1);
        printf("give me another number: \n");
        scanf("%d", &num2);
        printf("The result of that operation is: %d mr. %s", num1 * num2, name);
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

    else
    {
    printf("please select a valid operation...");
        }
    return 0; 
}
