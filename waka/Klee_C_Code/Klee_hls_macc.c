/*
 * First KLEE tutorial: testing a small function
 * http://klee.github.io/tutorials/testing-function/
 */

#include<stdio.h>
int hls_macc(int in1, int in2, int in3, int in4, int in7, int in8, int in9, int in10, int in12, int in14,int in15, int in17, int in19, int in20,
int in22, int in24, int in27, int in28, int in29, int in32, int *out13, int *out30, int *out31)
{

	int t5, t6, t11, t16, t18, t21, t23, t25, t26;//temporary

	//*out30 = 0;
	t5 = in3 - in4;      /* b */
	t6 = in7 + in8;      /* a */
	*out13 = in14 - in15;   /* k - output node */
	t11 = t6 + in12;    /* */
	if (in2 == in1)    /* p */
	 t16 = t11 - in17;  /* f */
	else
	{
	 t18 = in19 + in20;  /* c */
	 if (in9 < in10)     /* q */
	 {
	  t21 = t11 + in22; /* g */
	  t23 = t5 - in24;  /* e */
	  t25 = t21 + t23; /* i */
	  t26 = t25 + in27; /* j */
	 }
	 else
	  t26 = t5 + t18;  /* h */
	  t16 = t26 - in28;  /* m */
	  *out30 = t26 + in29;  /* l - output node  */
	}
	*out31 = t16 + in32;   /* n - output node  */
	//printf("%d ",*out31);
	return *out13+*out30+*out31;

}

int main()
{
int out13 = 0;
int out30 = 0;
int out31 = 0;
int in1, in2,in3,in4,in7,in8,in9,in10,in12,in14,in15,in17,in19,in20,in22,in24,in27,in28,in29,in32;
  klee_make_symbolic(&in1, sizeof(in1), "in1");
  klee_make_symbolic(&in2, sizeof(in2), "in2");
  klee_make_symbolic(&in3, sizeof(in3), "in3");
  klee_make_symbolic(&in4, sizeof(in4), "in4");
  klee_make_symbolic(&in7, sizeof(in7), "in7");
  klee_make_symbolic(&in8, sizeof(in8), "in8");
  klee_make_symbolic(&in9, sizeof(in9), "in9");
  klee_make_symbolic(&in10, sizeof(in10), "in10");
  klee_make_symbolic(&in12, sizeof(in12), "in12");
  klee_make_symbolic(&in14, sizeof(in14), "in14");
  klee_make_symbolic(&in15, sizeof(in15), "in15");
  klee_make_symbolic(&in17, sizeof(in17), "in17");
  klee_make_symbolic(&in19, sizeof(in19), "in19");
  klee_make_symbolic(&in20, sizeof(in20), "in20");
  klee_make_symbolic(&in22, sizeof(in22), "in22");
  klee_make_symbolic(&in24, sizeof(in24), "in24");
  klee_make_symbolic(&in27, sizeof(in27), "in27");
  klee_make_symbolic(&in28, sizeof(in28), "in28");
  klee_make_symbolic(&in29, sizeof(in29), "in29");
  klee_make_symbolic(&in32, sizeof(in32), "in32");
 return hls_macc(in1,in2,in3,in4,in7,in8,in9,in10,in12,in14,in15,in17,in19,in20,in22,in24,in27,in28,in29,in32,&out13,&out30,&out31);
}
