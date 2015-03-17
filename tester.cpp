#include "stdafx.h" 
#include<stdio.h>
#include<conio.h>
#include "driver.h" 

int main()
{
printf("\t\t******* Assembly Line Scheduling Algorithm ******** \n");
printf("please enter the number of nodes n: ");
scanf("%d",&n);
printf("please enter the entry values e1 e2:\n");
for(i=0;i<2;i++)
scanf("%d",&e[i]);
printf("please enter the exit values x1 x2:\n");
for(i=0;i<2;i++)
scanf("%d",&x[i]);
printf("\nplease enter the station times of assembly line S1:\n");
for(i=0; i<n; ++i)
scanf("%d", &a[0][i]);
printf("\nplease enter the station times of assembly line S2:\n");
                for(i=0 ; i<n; ++i){
                scanf("%d", &a[1][i]);
				}
                printf("\nEnter transition times from assembly line S1:\n");
                for(i=0; i<n-1; ++i){
                 scanf("%d", &t[0][i]);
				}
                printf("\nEnter transaction times from row/line S2:\n");
                for(i=0; i<n-1; ++i){
                scanf("%d", &t[1][i]);
				}
                fast_way();
printf("\n Optimal path costs are:\n");
i=1;
printf("For Path %d = ",i);
for(int j=0;j<n;j++)
printf("S[%d[%d]=%d\t",i,j+1,f1[j]);
printf("Total cost: %d \n",fe);
i=2;
printf("For Path %d = ",i);
for(int j=0;j<n;j++)
printf("S[%d][%d]=%d\t",i,j+1,f2[j]);
fe = f2[n-1] + x[1];
printf("Total cost: %d",fe);
getch();
return 0;
}