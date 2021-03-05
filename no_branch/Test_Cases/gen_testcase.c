#include <stdio.h>
#include <stdlib.h> 
#include<time.h> 
#include<unistd.h>

int main(){
	for(int i=0; i<100; i++){
		srand(time(0));
		int a = rand()%33 + (i*i)%33;		
		int b = rand()%11 + (i*i)%11;
		int c = rand()%14 + (i*i)%14;
		int d = rand()%20 + (i*i)%20;
		int e = rand()%7 + (i*i)%7;
		int f = rand()%2 + (i*i)%2;
		int g = rand()%5 + (i*i)%5;
		int h = rand()%19 + (i*i)%19;
		int i = rand()%14 + (i*i)%14;
		int j = rand()%3 + (i*i)%3;
		int k = rand()%15 + (i*i)%15;
		int l = rand()%23 + (i*i)%23;
		printf("%d %d %d %d %d %d %d %d %d %d %d %d\n",a,b,c,d,e,f,g,h,i,j,k,l);
	}
return 0;
}
