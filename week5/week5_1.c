#include <stdio.h>

void performTheOperation(char, int, int);
void performTheOperationSwichCase(char, int, int);

int main(void)
{
	int operand1, operand2;
	char op;
	float result;
	
	// Prompt the user to enter an operation and operands
	printf("enter the operation: ");
	scanf("%c", &op);
	printf("enter the first operand: ");
	scanf("%d", &operand1);
	printf("enter the second operand: ");
	scanf("%d", &operand2);

	// Call the function to perform the operation using switch-case
	// Uncomment the line below to use the if-else version instead
	// performTheOperation(op, operand1, operand2);
	performTheOperationSwichCase(op, operand1, operand2);
	
	return 0;
}


void performTheOperation(char op, int operand1, int operand2)
{
	float result;
	// Check the operator and perform the corresponding operation
	if(op == '+')
		result = operand1 + operand2;
	else if(op == '-')
		result = operand1 - operand2;
	else if(op == 'x')
		result = operand1 * operand2;
	else if(op == '/')
	{
		// Handle division by zero
		if(operand2 == 0)
		{
			printf("invalid division by zero\n");
			return;
		}
		result = (float)operand1 / operand2; // Cast to float for accurate division
	}
	else
	{
		// Handle invalid operator
		printf("invalid operator\n");
		return;
	}

	// Print the result of the operation
	printf("%d %c %d = %f\n", operand1, op, operand2, result);
}

void performTheOperationSwichCase(char op, int operand1, int operand2)
{
	float result;
	// Use switch-case to handle the operator
	switch (op)
	{
		case '+':
			result = operand1 + operand2;
			break;
		case '-':
			result = operand1 - operand2;
			break;
		case 'x':
			result = operand1 * operand2;
			break;
		case '/':
			// Handle division by zero
			if(operand2 == 0)
			{
				printf("invalid division by zero\n");
				return;
			}
			result = (float)operand1 / operand2; // Cast to float for accurate division
			break;
		default:
			// Handle invalid operator
			printf("invalid operator\n");
			return;
	}

	// Print the result of the operation
	printf("%d %c %d = %f\n", operand1, op, operand2, result);
}



