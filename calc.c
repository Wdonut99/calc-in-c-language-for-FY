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
     printf("Answer is %d",x+y);
     break;
       case '-':
     printf(" Answer is %d",x-y);
     break;
       case '/':
     printf(" Answer is %d",x/y);
     break;
       case '*':
     printf(" Answer is %d",x*y);
     break;
        default:
      printf("wrong symbol") 
      break;
    }
    

    return 69;
}
