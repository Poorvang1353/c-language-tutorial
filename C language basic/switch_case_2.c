#include<stdio.h>

int main(int argc, char const *argv[])

{

    int x,p;



    printf("Enter the value of X\n");

    scanf("%d", &x);



    printf("And enter your age please\n");

    scanf("%d", &p);



    switch (x)

    {

    case 0:

        printf("Yes! 0 is the correct answer\n");

        printf("there are two answers of this question, please find the other answer too\n");



        switch (p)

        {

        case 23:

            printf("your IQ is brilliant according to your current age\n");

            break;

        

        default:

        printf("Your IQ does not match according to your age\n");

            break;

        }

        break;



        case 1:

        printf("Yes! 1 is the correct answer\n");

        printf("there are two answers of this question, please find the other answer too\n");



        switch (p)

        {

        case 23:

            printf("your IQ is brilliant according to your current age\n");

            break;

        

        default:

        printf("Your IQ does not match according to your age\n");

        break;

        }

        break;

    

    default:

    printf("your answer is incorrect\n");

    printf("sorry your IQ does not match with your age\n");

        break;

    }

    return 0;

}