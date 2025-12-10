#include<stdio.h>
#include<math.h>
int main(void)
{
	double A, P, R, T, X, CI;
	printf("Enter Principl Amount:");
	scanf("%lf",&P); 
	printf("Enter Annual Intrest Rate:");
	scanf("%lf",&R); 
	printf("Enter Time Period (years):");
	scanf("%lf",&T); 
	X=1+R/100;
	A=P*pow(X,T);
	CI=P-A;
	printf("Compound Intrest:%lf",CI);
}
