#include <stdio.h>
#include <stdlib.h>


int main(int argc, char * argv[])
{
	long p = 1;

	int a = 2;

	int b = 10;
	
	while (b)
	{
		p = p * a;
		b--;
	}
	printf("%d", p);
	
	
	
	getch();
	return 0;
}