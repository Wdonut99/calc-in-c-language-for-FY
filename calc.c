#include <stdio.h>
int main()
{
    char cal;
    int x,y;
    printf("enter your choice (+,-,*,/)");
     scanf("%c",&cal);
     printf("enter the value of x\n");
    scanf("%d,%d",&x);
     printf("enter the value of y\n");
    scanf("%d,%d",&y);
    
    switch (cal)
    {
     case '+':
     printf(" %d",x+y);
     break;
     case '-':
     printf(" %d",x-y);
     break;
     case '/':
     printf(" %d",x/y);
     break;
     case '*':
    printf(" %d",x*y);
     break;
    }

    return 0;
}
