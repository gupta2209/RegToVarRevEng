//In this program we need to generate 2 3*3 matrix with random numbers to test the correctness of the program....lets do it
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	for(int count=1; count<=10; count++){	
		srand(time(0));		
		for(int i=1; i<=3; i++){
			for(int j=1; j<=3; j++){
				int num = rand()%21+i*count*j;
				printf("%d ",num);
			}
		}
		for(int i=1; i<=3; i++){
			for(int j=1; j<=3; j++){
				int num = rand()%10+i*count*j;
				printf("%d ",num);
			}
		}
		printf("\n");	
	}
}
