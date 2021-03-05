#include <stdio.h>

int findmin(int a1,int a2,int a3,int a4,int a5,int a6,int a7,int a8)
{
 	  //int a1, a2, a3, a4, a5, a6, a7, a8;
 	  int a12, a34, a56, a78;
 	  int a14, a58;
 	  int a18;
 	   	  
 	  
 	  if(a1<a2) a12 = a1;
 	  else a12 = a2;
 	  
 	  if(a3<a4) a34 = a3;
 	  else a34= a4;
 	  
 	  if(a5<a6) a56 = a5;
 	  else a56 = a6;
 	  
 	  if(a7<a8) a78 = a7;
 	  else a78 = a8;
 	  
 	  if(a12<a34) a14 = a12;
 	  else a14 = a34;

 	  if(a56<a78) a58 = a56;
 	  else a58 = a78;
 	  
 	  if(a14<a58) a18 = a14;
 	  else a18 = a58;
 	  
 	  //printf("%d\n",a18);
	  return a18;
}

