//Program that performs four-function operations. Accepts a particular
//operation, followed by two numbers and returns the result.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main (int argc, char* argv[]) {

	if (argc == 1) { 
		return(0); // if the user does not insert any values, ends the program
	}

	char operator;
	operator = argv[1][0]; 

	char addition = '+';
	char subtraction = '-';
	char multiplication = 'x';
	char division = '/';

	float operand1 = atof(argv[2]);
	float operand2 = atof(argv[3]);


	if (operator == addition) {
		float add_ans = operand1 + operand2;
		printf ("%f \n", add_ans);
	}
	if (operator == subtraction) {
		float subt_ans = operand1 - operand2;
		printf ("%f \n", subt_ans);
	}
	if (operator == multiplication) {
		float mult_ans = operand1 * operand2;
		printf ("%f \n", mult_ans);
	}
	if (operator == division) {
		float div_ans = operand1 / operand2;
		printf ("%f \n", div_ans);
	}
	return(0);
}	

