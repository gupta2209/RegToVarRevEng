#include<stdio.h>

int res[3][3] = {0,0,0,0,0,0,0,0,0};
void matrixmul(int mat1[3][3],int mat2[3][3])
{
	int i, j, k;
	int res1[3][3];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            res1[i][j] = 0;
            for (k = 0; k < 3; k++)
                res1[i][j] += mat1[i][k] * mat2[k][j];
        }
    }
  	for(i = 0; i < 3; i++) {
      //Iterate over the columns of the B matrix
       	for(j = 0; j < 3; j++) {
           	res[i][j] = res1[i][j];
			//printf("%d ",res[i][j]);
         }
    }
	//printf("\n");
  	for(i = 0; i<3; i++){
  		for(j = 0; j<3; j++){
  			res[i][j] = res[i][j]*2 + mat1[i][j] + mat2[i][j];
  		}
  	}
  	for(i=0; i<=1; i++){
  		for(j=0; j<=1; j++){
  			res[i][j] = res[j][i];
  		}
  	}
}

int main(){
	int mat1[3][3] = {4,8,2,9,7,5,11,20,13},mat2[3][3] = {3,9,2,5,6,1,4,7,8};
	matrixmul(mat1,mat2);
	for(int i = 0; i < 3; i++) {
      //Iterate over the columns of the B matrix
       	for(int j = 0; j < 3; j++) {
           	//res[i][j] = res1[i][j];
			printf("%d ",res[i][j]);
         }
		printf("\n");
    }
return 0;
}

