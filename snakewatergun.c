#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int snakewatergun(char,char);
int main()
{
    char you, comp;
    srand(time(0));
    int num = rand() % 100 + 1;
    if (num < 33)
    {
        comp = 's';
    }
    else if (num > 33 && num < 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }

    printf("Enter 's' for snake, 'w' for water and 'g' for gun:-\n");
    scanf("%c", &you);
    int result = snakewatergun(you, comp);
    printf("You choose %c and computer choose %c \n", you, comp);
    if (result == 0)
    {
        printf("Game Draw !\n");
    }
    else if (result == -1)
    {
        printf("you lose !\n");
    }
    else
    {
        printf("You Win !\n");
    }
    return 0;
}

int snakewatergun(char you, char comp)
{
    // if return 0 Game drow
    // if return -1 You lose
    // if return 1 You win
    //  condition for drow
    if (you == comp)
    {
        return 0;
    }
    // condition for non drow
    if (you == 's' && comp == 'g') // gun kill snake
    {
       // printf("\nGun kill Snake");
        return -1;
    }
    else if (you == 's' && comp == 'w') // snake drink water
    {
       // printf("\nSnake Drink water");
        return 1;
    }
    else if (you == 'w' && comp == 's') //
    {
       // printf("\nSnake Drink water");
        return -1;
    }
    else if (you == 'w' && comp == 'g')
    {
       // printf("\nGun Damage");
        return 1;
    }
    else if (you == 'g' && comp == 's')
    {
       // printf("\nGun kill snake");
        return 1;
    }
    else if(you == 'g' && comp == 'w')
    {
       // printf("\nGun Damage");
            return -1;
    }
}
