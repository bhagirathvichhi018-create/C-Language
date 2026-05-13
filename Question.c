
#include<stdio.h>

int main()
{
    char answer;
    int marks = 0;

    
    printf("\nQ1. C language kisne banayi?\n");
    printf("A. Dennis Ritchie\n");
    printf("B. James Gosling\n");
    printf("C. Guido\n");
    printf("D. Bjarne\n");

    printf("Answer do: ");
    scanf(" %c", &answer);

    if(answer == 'A')
    {
        printf("Right Answer\n");
        marks = marks + 1;
    }
    else
    {
        printf("Wrong Answer\n");
        printf("Correct Answer is: A\n");
    }

    printf("\nQ2. printf() ka use kisliye hota hai?\n");
    printf("A. Input\n");
    printf("B. Output\n");
    printf("C. Loop\n");
    printf("D. Variable\n");

    printf("Answer do: ");
    scanf(" %c", &answer);

    if(answer == 'B')
    {
        printf("Right Answer\n");
        marks = marks + 1;
    }
    else
    {
        printf("Wrong Answer\n");
        printf("Correct Answer is: B\n");
    }

    printf("\nQ3. Program kaha se start hota hai?\n");
    printf("A. start()\n");
    printf("B. run()\n");
    printf("C. main()\n");
    printf("D. execute()\n");

    printf("Answer do: ");
    scanf(" %c", &answer);

    if(answer == 'C')
    {
        printf("Right Answer\n");
        marks = marks + 1;
    }
    else
    {
        printf("Wrong Answer\n");
        printf("Correct Answer is: C\n");
    }

    printf("\nTotal Marks = %d/3\n", marks);

    
}


