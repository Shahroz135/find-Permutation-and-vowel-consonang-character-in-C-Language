#include"stdio.h"
#include"conio.h"
void main()
{
    int n,r,x,h;
    float f,p;
    clrscr();
    printf("Enter value n:");
    scanf("%d",&n);
    printf("Enter value of r:");
    scanf("%d",&r);
    if(n<0||r<0)
    {
    printf("you enter wrong input");
    }
    else
    {
        f=n-r;
        printf("value of n-r:%.3f",f);
        x=1;
        h=1;
        while(f>0)
      {  
       x=x*f;
       f--;
      }
      while(n>0)
      {
          h*=n;
          n--;
      }
      printf("fictorial of n:%d",h);
    printf("\nvalue of x:%d",x);
    p=h/x;
    printf("\nvalue of prrmutation:%.3f",p);
    }
    getch();
}