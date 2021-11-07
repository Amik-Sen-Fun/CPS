// Attack generation without a residue based detector

#include<stdio.h>
#include<math.h>
#include<inttypes.h>
#include "library.h"
float nondet_float();
int const L =10,attackLen = 3, startpoint = 0;
int main()
	{
		float theta[L+1], omega[L+1], a1[L], x1_0 = 0, x2_0 = 0, u_0 = 0, u_attacked_0 = 0, y1_0 = 0, y2_0 = 0, x1_1 = 0, x2_1 = 0, u_1 = 0, u_attacked_1 = 0, y1_1 = 0, y2_1 = 0, x1_2 = 0, x2_2 = 0, u_2 = 0, u_attacked_2 = 0, y1_2 = 0, y2_2 = 0,x1_3 = 0, x2_3 = 0, u_3 = 0, u_attacked_3 = 0, y1_3 = 0, y2_3 = 0, x1_4 = 0, x2_4 = 0, u_4 = 0, u_attacked_4 = 0, y1_4 = 0, y2_4 = 0, x1_5 = 0, x2_5 = 0, u_5 = 0, u_attacked_5 = 0, y1_5 = 0, y2_5 = 0, x1_6 = 0, x2_6 = 0, u_6 = 0, u_attacked_6 = 0, y1_6 = 0, y2_6 = 0, x1_7 = 0, x2_7 = 0, u_7 = 0, u_attacked_7 = 0, y1_7 = 0, y2_7 = 0, x1_8 = 0, x2_8 = 0, u_8 = 0, u_attacked_8 = 0, y1_8 = 0, y2_8 = 0, x1_9 = 0, x2_9 = 0, u_9 = 0, u_attacked_9 = 0, y1_9 = 0, y2_9 = 0, x1_10 = 0, x2_10 = 0, u_10 = 0, u_attacked_10 = 0, y1_10 = 0, y2_10 = 0;
		//int8_t syn = 0;

		x1_0 = nondet_float();
		while(isnan(x1_0) || isinf(x1_0))
			x1_0 = nondet_float();
		x2_0 = nondet_float();
		while(isnan(x2_0) || isinf(x2_0))
			x2_0 = nondet_float();

		theta[0] = absolute(x1_0);
		omega[0] = absolute(x2_0);

		a1[0] = nondet_float();
		while(isnan(a1[0]) || isinf(a1[0]))
			a1[0] = nondet_float();
		u_0 = -(0.0556*x1_0) - (0.3306*x2_0);
		u_attacked_0 = u_0 + a1[0];
		x1_1 = (0.66*x1_0) + (0.53*x2_0) + (0.34*u_attacked_0);
		x2_1 = - (0.53*x1_0) + (0.13*x2_0) + (0.53*u_attacked_0);
		theta[1] = absolute(x1_1);
		omega[1] = absolute(x2_1);

		a1[1] = nondet_float();
		while(isnan(a1[1]) || isinf(a1[1]))
			a1[1] = nondet_float();
		u_1 = -(0.0556*x1_1) - (0.3306*x2_1);
		u_attacked_1 = u_1 + a1[1];
		x1_2 = (0.66*x1_1) + (0.53*x2_1) + (0.34*u_attacked_1);
		x2_2 = - (0.53*x1_1) + (0.13*x2_1) + (0.53*u_attacked_1);
		theta[2] = absolute(x1_2);
		omega[2] = absolute(x2_2);

		a1[2] = nondet_float();
		while(isnan(a1[2]) || isinf(a1[2]))
			a1[2] = nondet_float();
		u_2 = -(0.0556*x1_2) - (0.3306*x2_2);
		u_attacked_2 = u_2 + a1[2];
		x1_3 = (0.66*x1_2) + (0.53*x2_2) + (0.34*u_attacked_2);
		x2_3 = - (0.53*x1_2) + (0.13*x2_2) + (0.53*u_attacked_2);
		theta[3] = absolute(x1_3);
		omega[3] = absolute(x2_3);

		a1[3] = 0;
		u_3 = -(0.0556*x1_3) - (0.3306*x2_3);
		u_attacked_3 = u_3 + a1[3];
		x1_4 = (0.66*x1_3) + (0.53*x2_3) + (0.34*u_attacked_3);
		x2_4 = - (0.53*x1_3) + (0.13*x2_3) + (0.53*u_attacked_3);
		theta[4] = absolute(x1_4);
		omega[4] = absolute(x2_4);

		a1[4] = 0;
		u_4 = -(0.0556*x1_4) - (0.3306*x2_4);
		u_attacked_4 = u_4 + a1[4];
		x1_5 = (0.66*x1_4) + (0.53*x2_4) + (0.34*u_attacked_4);
		x2_5 = - (0.53*x1_4) + (0.13*x2_4) + (0.53*u_attacked_4);
		theta[5] = absolute(x1_5);
		omega[5] = absolute(x2_5);

		a1[5] = 0;
		u_5 = -(0.0556*x1_5) - (0.3306*x2_5);
		u_attacked_5 = u_5 + a1[5];
		x1_6 = (0.66*x1_5) + (0.53*x2_5) + (0.34*u_attacked_5);
		x2_6 = - (0.53*x1_5) + (0.13*x2_5) + (0.53*u_attacked_5);
		theta[6] = absolute(x1_6);
		omega[6] = absolute(x2_6);

		a1[6] = 0;
		u_6 = -(0.0556*x1_6) - (0.3306*x2_6);
		u_attacked_6 = u_6 + a1[6];
		x1_7 = (0.66*x1_6) + (0.53*x2_6) + (0.34*u_attacked_6);
		x2_7 = - (0.53*x1_6) + (0.13*x2_6) + (0.53*u_attacked_6);
		theta[7] = absolute(x1_7);
		omega[7] = absolute(x2_7);

		a1[7] = 0;
		u_7 = -(0.0556*x1_7) - (0.3306*x2_7);
		u_attacked_7 = u_7 + a1[7];
		x1_8 = (0.66*x1_7) + (0.53*x2_7) + (0.34*u_attacked_7);
		x2_8 = - (0.53*x1_7) + (0.13*x2_7) + (0.53*u_attacked_7);
		theta[8] = absolute(x1_8);
		omega[8] = absolute(x2_8);

		a1[8] = 0;
		u_8 = -(0.0556*x1_8) - (0.3306*x2_8);
		u_attacked_8 = u_8 + a1[8];
		x1_9 = (0.66*x1_8) + (0.53*x2_8) + (0.34*u_attacked_8);
		x2_9 = - (0.53*x1_8) + (0.13*x2_8) + (0.53*u_attacked_8);
		theta[9] = absolute(x1_9);
		omega[9] = absolute(x2_9);

		a1[9] = 0;
		u_9 = -(0.0556*x1_9) - (0.3306*x2_9);
		u_attacked_9 = u_9 + a1[9];
		x1_10 = (0.66*x1_9) + (0.53*x2_9) + (0.34*u_attacked_9);
		x2_10 = - (0.53*x1_9) + (0.13*x2_9) + (0.53*u_attacked_9);
		theta[10] = absolute(x1_10);
		omega[10] = absolute(x2_10);


		assert((theta[0] > 0.01 || omega[0]>0.005)||((theta[0]<=0.1 && omega[0]<=0.05) && (theta[1]<=0.1 && omega[1]<=0.05) && (theta[2]<=0.1 && omega[2]<=0.05) && (theta[3]<=0.1 && omega[3]<=0.05) && (theta[4]<=0.1 && omega[4]<=0.05) && (theta[5]<=0.1 && omega[5]<=0.05) && (theta[6]<=0.1 && omega[6]<=0.05) && (theta[7]<=0.1 && omega[7]<=0.05) && (theta[8]<=0.1 && omega[8]<=0.05) && (theta[9]<=0.1 && omega[9]<=0.05) && (theta[10]<=0.1 && omega[10]<=0.05)));
		return 0;
	}