// Attack generation with a residue based detector

#include<stdio.h>
#include<math.h>
#include<inttypes.h>
#include "library.h"
float nondet_float();
int const L =10,attackLen = 3, startpoint = 0; 
float Th = 0.1;
int main()
	{
		
		// declaring the residues
		float r[L+1][3], z[L+1][3], residue[L+1];
		// theta and omega
		float theta[L+1], omega[L+1];
		// x, u_attacked, attack, u
		float u_attacked[L+1], x[L+1][3], attack[L+1], u[L+1];
	       	 
		// initialising the variables
		for(int i = 0; i<=L; i++){
			for(int j = 0; j<3; j++){
				r[i][j] = 0; z[i][j] = 0; x[i][j] = 0;
			}
		}

		int a_len = attackLen;

		for(int i = 0; i<=L; i++){
			theta[i] = 0; omega[i] = 0; residue[i] = 0; u[i] = 0; u_attacked[i] = 0;

			if(a_len>0)
			{	
				attack[i] = nondet_float();
				while(isnan(attack[i]) || isinf(attack[i]))
					attack[i] = nondet_float();
				a_len--;
			}
			else{
				attack[i] = 0;
			}
			  
		}	

        // For assignment we need to calculate the residue and take the inf-norm of it and compare it with the 
		// given thresholds
		
		// L = 0 we will initialise the required variables
		x[0][1] = nondet_float();
		while(isnan(x[0][1]) || isinf(x[0][1]))
			x[0][1] = nondet_float();

		x[0][2] = nondet_float();
		while(isnan(x[0][2]) || isinf(x[0][2]))
			x[0][2] = nondet_float();


		for(int i = 0; i<L; i++){
			// u = -Kz
			u[i] = -(0.0556*z[i][1]) - (0.3306*z[i][2]);

			// attacked u 
			u_attacked[i] = u[i] + attack[i];

			// r = Cx - Cz
			r[i][1] =  x[i][1] - z[i][1]; r[i][2] = x[i][2] - z[i][2];

			// x = Ax + Bu
			x[i+1][1] = (0.66*x[i][1]) + (0.53*x[i][1]) + (0.34*u_attacked[i]);
			x[i+1][2] = - (0.53*x[i][1]) + (0.13*x[i][2]) + (0.53*u_attacked[i]);

			// z = Az + Bu + Lr
			z[i+1][1] = (0.66*x[i][1]) + (0.53*x[i][2]) + (0.34*u_attacked[i]) + (0.36*r[i][1]) + (0.27*r[i][2]);
			z[i+1][2] = - (0.53*x[i][1]) + (0.13*x[i][2]) + (0.53*u_attacked[i]) + (-0.31*r[i][1]) + (0.08*r[i][2]);

			// theta,omega,residue
			theta[i] = absolute(x[i][1]);
			omega[i] = absolute(x[i][2]);
			// L norm 
			residue[i] = max(absolute(r[i][1]),absolute(r[i][2]));
		}
		// for the last L
		theta[L] = absolute(x[L][1]);
		omega[L] = absolute(x[L][2]);

		

		// Done for L = 10
		assert((theta[0] >= 0.01 || omega[0]>=0.005 || residue[0]>=Th || residue[1]>=Th || residue[2]>=Th ||
			residue[3]>=Th ||residue[4]>=Th ||residue[5]>=Th ||residue[6]>=Th ||residue[7]>=Th ||
			residue[8]>=Th ||residue[9]>=Th) ||((theta[0]<=0.1 && omega[0]<=0.05) 
			&& (theta[1]<=0.1 && omega[1]<=0.05) && (theta[2]<=0.1 && omega[2]<=0.05) 
			&& (theta[3]<=0.1 && omega[3]<=0.05) && (theta[4]<=0.1 && omega[4]<=0.05) 
			&& (theta[5]<=0.1 && omega[5]<=0.05) && (theta[6]<=0.1 && omega[6]<=0.05) 
			&& (theta[7]<=0.1 && omega[7]<=0.05) && (theta[8]<=0.1 && omega[8]<=0.05) 
			&& (theta[9]<=0.1 && omega[9]<=0.05) && (theta[10]<=0.1 && omega[10]<=0.05)));
		return 0;
	}
