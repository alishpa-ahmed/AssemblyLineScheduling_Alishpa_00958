#include "stdafx.h" 
#include<stdio.h>
#include<conio.h>


int n,i, fe, le;
int a[2][100], t[2][99], e[2], x[2], f1[100], f2[100], l[2][100];

void print_stations()
{
int j,i=le;
printf("\n Optimal path is:\n");
for(j=1;j<n;++j)
{
    i = l[i-1][j];
    printf("assembly line %d ", i);
    printf("station %d ", j);
    printf("\n");
}
i = le;
printf("assembly line %d ", i);
printf("station %d ", n);
printf("\n");
}


void fast_way()
{
f1[0] = e[0] + a[0][0];
f2[0] = e[1] + a[1][0];

 for(int j = 1; j<n; ++j){

	if( (f1[j-1]+a[0][j]) <= (f2[j-1]+t[1][j-1]+a[0][j]) ) {
		f1[j] = f1[j-1] + a[0][j];
		l[0][j] = 1;
	}
	else {
		f1[j] = f2[j-1] + t[1][j-1] + a[0][j];
		l[0][j] = 2;
	}
	if( (f2[j-1]+a[1][j]) <= (f1[j-1]+t[0][j-1]+a[1][j]) ) {
		f2[j] = f2[j-1] + a[1][j];
		l[1][j] = 2;
	}
	else {
		f2[j] = f1[j-1] + t[0][j-1] + a[1][j];
		l[1][j] = 1;
	}
}
if( (f1[n-1] + x[0]) <= (f2[n-1] + x[1]) ) {
	fe = f1[n-1] + x[0];
	le = 1;
}
else {
	fe = f2[n-1] + x[1];
	le = 2;
}

print_stations();

}

