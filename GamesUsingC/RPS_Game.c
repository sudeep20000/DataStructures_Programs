/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generateRandom(int n){
    srand(time(NULL));
    return rand()%n;
}
int main()
{
        printf("The random number between 0 to 10 is :%d\n",generateRandom(10));
}*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    char name[10];
    int i = 0;
    printf("\t----Welcome To RockPaperScissors Game----\t\n");
    printf("Enter your name:\n");
    scanf("%s", &name);
    int u_count = 0;
    int c_count = 0;
    int round = 1;
    while (i < 4)
    {
        int n, r;
        printf("\t------(Round %d)------\t\n", round);
        printf("%s your turn=>\n", name);
    end:
        printf("Enter 0 for rock\t1 for paper\t2 for scissors\n");
        scanf("%d", &n);
        printf("You Entered: %d\n", n);
        switch (n)
        {
        case 0:
            printf("You choose Rock\n");
            break;
        case 1:
            printf("You choose Paper\n");
            break;
        case 2:
            printf("You choose Scissors\n");
            break;
        default:
            printf("Enter valid input,%d is not valid input!!!!\n", n);
            goto end;
        }
        printf("Computer's turn=>\n");
        printf("Enter 0 for rock\t1 for paper\t2 for scissors\n");
        srand(time(NULL));
        r = rand() % 2;
        printf("Computer Entered: %d\n", r);
        switch (r)
        {
        case 0:
            printf("Computer choose Rock\n");
            break;
        case 1:
            printf("Computer choose Paper\n");
            break;
        case 2:
            printf("Computer choose Scissors\n");
            break;
        }
        if (n == 0 && r == 2 || n == 1 && r == 0 || n == 2 && r == 1)
        {
            printf("Congratulatuion %s you won!!!!\n", name);
            u_count++;
        }
        else if (n == r)
        {
            printf("Result ties!!!!\n");
        }
        else
        {
            printf("Computer won!!!\n");
            c_count++;
        }
        printf("Your Score: %d\nComputer's Score: %d\n", u_count, c_count);
        round++;
        i++;
    }
    printf("\t----(Final Score)----\t\n");
    printf("%s you win :%d times\n", name, u_count);
    printf("Computer win :%d times\n", c_count);
    if (u_count > c_count)
    {
        printf("Congratulations!!!!%s you beat the computer.\n", name);
    }
    else if (u_count < c_count)
    {
        printf("Better luck next time %s!!!!! you lose the game....\n", name);
    }
    else
    {
        printf("Result ties %d-%d\n", u_count, c_count);
    }
    printf("Thanks %s for playing the game!!", name);
    return 0;
}