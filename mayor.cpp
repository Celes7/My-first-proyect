#include <stdio.h>

int main()
{
	int a, b;
	int menor;
	
	printf("Introduce el primer numero: ");
	scanf("%d",&a);
	printf("Introduce el segundo numero: ");
	scanf("%d",&b);
	
	if(a < b)
	{
		printf("El primer numero %d es menor que  %d ", a, b);
	}
	else{
		printf("El segundo numero %d es menor que %d ", b, a);
	}
	
	return 0;
}
