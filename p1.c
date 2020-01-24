#include<stdio.h>
void main()
{
int dt,fc;
char tov;
printf("enter the distance travelled\n");
scanf("%d",&dt);
printf("enter the type of vehicle\n");
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

