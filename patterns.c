#include <stdio.h>
#include <cs50.h>

int main(){
	int pattern = get_int("Enter type of pattern (1 or 2) ");
	int rows = get_int("Number of rows ");
	
	if (pattern == 1)
	{
		for (int i = 1; i <= rows; i++)
		{
			for (int j = rows; j >= i; j--)
			{
				printf("#");
			}
			printf("\n");
		}
		
	}else{
		 
		for ( int i = 1; i <= rows; i++)
		{
			for (int k = rows - 1; k >= i  ; k--)
			{
				printf(" ");
			}
			
			for ( int j = 1; j <= i; j++)
			{
				printf("#");
			}
			printf("\n");
			
		}
		
	}
	
	
	

}
	
