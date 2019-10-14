#include <stdio.h>

int main() {
	
	int szam = 0;
	
	for(int i = 100; i < 200; i++)
	{
		if(i % 9 == 0)
		{
			szam = szam + i;
		}
	}
	printf("%d ", szam);
}