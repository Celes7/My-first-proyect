#include <stdio.h>

int main()
{
	int a, b;
	int mayor;
	
	printf("Introduce el primer numero: ");
	scanf("%d",&a);
	printf("Introduce el segundo numero: ");
	scanf("%d",&b);
	
	if(a > b)
	{
		printf("El primer numero %d es mayor que  %d ", a, b);
	}
	else{
		printf("El segundo numero %d es mayor que %d ", b, a);
	}
	
	return 0;
}
