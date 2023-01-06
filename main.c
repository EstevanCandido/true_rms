#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* ===================================================================== */
/* --- Protótipo das funções --- */
float true_rms(float volts[], int N);

/* ===================================================================== */
/* --- Macros --- */

/* ===================================================================== */
/* --- Função Principal --- */

main ()
{
	float v[5] = {1.5, 3.8, 4.9, 5.7, 2.1};
	printf("Vrms=%.4fV\n", true_rms(v,5));
	
	system("PAUSE");
	return 0;
} //end main

/* ===================================================================== */
/* --- Desenvolvimento das funções --- */

float true_rms(float volts[], int N)
{
	register int i;
	float rms = 0.0;
	
	for(i=0;i<N;i++)
		volts[i] *= volts[i];
		
	for(i=0;i<N;i++)
		rms +=  volts[i];
	
	rms/= N;
	
	return sqrt(rms);
		
}
