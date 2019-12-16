#include <stdio.h>
#include "stdio_setup.h"
#include "OhmsLaw.h"

int main(void)
{
	float U,I,R;
	
	UartInit();	
	
	
	printf("Enter the voltage in Volts: ");
	
	scanf("%f",&U);
	
	printf("Enter the resistance in Ohms: ");
	
	scanf("%f",&R);
	
	//I = U / R;
	
	printf("\r\n Current in AMPs is: %.2f", CalculateCurrent(U, R));
	
	return 0;
}