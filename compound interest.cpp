
#include <stdio.h>
#include<math.h> 

int main() {
double principal = 3000;
double rate = 9;
double time = 89; 
	double Amount = principal * (pow((1 + rate / 100), time));
	double CI = Amount - principal;

	printf("Compound Interest is : %lf",CI);
	return 0;
}
