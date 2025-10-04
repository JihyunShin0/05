#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int answer = 59;
    int trial = 0;
    int num;
    
    do
    {
        printf("Guess a number : ");
        scanf("%d", &num);
        
        if (num > answer)
           printf("high!\n");
        else if (num < answer)
           printf("low!\n");
        trial++;
    }
    while (num != answer);
    
    printf("Congratulation! trial : %i\n", trial);

    system("PAUSE");	
    return 0;
}
