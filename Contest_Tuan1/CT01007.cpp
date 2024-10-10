#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define ll long long 

int main()
{   
	int x,y,z,k;
	scanf("%d %d %d",&x,&y,&z);
	k=0.5*x+0.4*y+0.1*z;
	if(k<=10&&k>=8) 
    {
        printf("Hup");
    }
	else if(k<8&&k>=5)
    {
        printf("Lop du phong");
    }
	else printf("Next");

	return 0;
}