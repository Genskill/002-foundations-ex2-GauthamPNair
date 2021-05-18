#include <stdio.h>
#include <cs50.h>
int main(){
	float a = get_float("side 1 ");
	float b = get_float("side 2 ");
	float c = get_float("side 3 ");
	if (a>b && a>c)
	{
		if ( a*a == b*b + c*c)
		{
			printf("Yes");
		}else{
			printf("No");
		}
		
	}
	else if (b>c && b>a)
	{
		if ( b*b == a*a + c*c)
		{
			printf("Yes");
		}else{
			printf("No");
		}
	}
	else{
		if ( c*c == a*a + b*b)
		{
			printf("Yes");

		}
		else{
			printf("No");
		}
	
	}
	
	
	
}
	








