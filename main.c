#include <stdio.h>
#include <stdlib.h>
#define max 50
int stack[max];
int top=-1,i,n,m;

int main()
{
    printf("Enter decimal\n");
    scanf("%d", &n);
    m=n;
    do
    {
        top++;
        stack[top]=n%2;
        n=n/2;
    }while(n!=1);
    stack[++top]=1;
    if(m>0 && m<16)
    {
        while(top!=3)
        {
            stack[++top]=0;
        }
    }
    if(m>15 && m<32)
    {
        while(top!=4)
        {
            stack[++top]=0;
        }
    }
    for(i=top;top>-1;i++)
    {
        printf("%d", stack[top--]);
    }
}
