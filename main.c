#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a, b;
    char c;
    int result;
    
    printf("enter the calculation : ");
    scanf("%d %c %d", &a, &c, &b);
    
    if (c == '+')
       result = a+b;
    else if (c == '-')
       result = a-b;
    else if (c == '*')
       result = a*b;
    else if (c == '/')
       result = a/b;
    
    printf("= %d\n", result);

    system("PAUSE");	
    return 0;
}
