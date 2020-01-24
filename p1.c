#include<stdio.h>
void main()
{
int dt,fc;
char tov;
printf("Enter the Distance travelled\n");
scanf("%d",&dt);
printf("Enter the type of vehicle\n");
scanf(" %c",&tov);
if(tov=='M')
{
 fc=dt*15;
printf(" the final cost is %d",fc);
}
else if (tov=='m')
{
fc =dt*20;
printf("the final cost is %d ",fc);
}
else if (tov=='s')
{
fc =dt*25;
printf("the final cost is %d",fc);
}
else 
{
 printf("invalid option\n");
}
}

