#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
//random number generator
    int number,guess;
    int flag=0;
    int num_guess=1;
    srand(time(0));
    number=rand()%100+1;
//Game.c
   printf("Guess the randomly generated number between 1 and 100 \n");
    scanf("%d",&guess);

    do{
         
        
        
        
        if(number>guess)
        {
        printf("Please gess a number that is higher\n");
        scanf("%d",&guess);
        num_guess++;
        }
        else if(number<guess)
        {
        printf("Please guess a number that is lower\n");
        scanf("%d",&guess);
        num_guess++;
        }
        
        else if(number==guess)
        {
        printf("The number you guessed is correct ! and in %d attempts\n",num_guess);
        flag=1;
        }

    
    }
    while(flag==0);

return 0;
}
