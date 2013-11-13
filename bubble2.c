#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define a 130000
// //sortowanie z wartownikiem zajelo 86sec
int main(){
	int t[a],b,i,j,num,w;
clock_t t1,t2;

	srand(time(NULL));
	for (i = 0; i < a; i++)
	{    
		   num = rand() % a + 1;
		   t[i] = num;
	}
		time(&t1);
		for (i = a; i>=0; i--)
			{  	
				w=0;	for (j = 0; j < i; j++)
					{ 			if(t[j]>t[j+1]) {
									b=t[j];
									t[j]=t[j+1];
									t[j+1]=b;
									w=1; }
									
					}
					if(w==0) break;
			}
	time(&t2);
	printf("\nczas sortowania b¹belkowego w sec \nstart=%5d \nstop= %5d \nzajelo=%5d",t1,t2,t2-t1);
	return 0;
}
