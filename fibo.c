#include "fibo.h"

int fibonacci(int numero)
{
	if(numero == 1)
		return 1;
	if(numero == 2)
		return 1;
	else
		return (fibonacci(numero - 1) + fibonacci(numero - 2));
	}

